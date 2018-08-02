#include <iostream>
#include <random>
#include <chrono>

int main()
{
    // Use hi res clock to seed rng
    long long seed {std::chrono::high_resolution_clock::now().time_since_epoch().count()};

    std::cout << "The seed is " << seed << std::endl;

    std::mt19937 rd (seed);
    std::normal_distribution<double> distribution(0,1);

    long long int max_samples {100000};
    double current_sample {0};
    double *samples = new double[max_samples];
    double mean {0};
    double variance {0};

    // Generate samples
    for (long long int ii = 0; ii < max_samples; ++ii)
    {
        current_sample = distribution(rd);
        samples[ii] = current_sample;
        //std::cout << current_sample << std::endl;
    }


    // Estiamte mean and varaince
    for (long long int ii = 0; ii < max_samples; ++ii)
    {
        mean += samples[ii];
        variance += samples[ii]*samples[ii];
    }
    mean /= max_samples;
    variance /= max_samples;

    std::cout << "The mean is " << mean << " and the variance is " << variance << std::endl;

    delete samples;
    samples = nullptr;

    return 0;
}