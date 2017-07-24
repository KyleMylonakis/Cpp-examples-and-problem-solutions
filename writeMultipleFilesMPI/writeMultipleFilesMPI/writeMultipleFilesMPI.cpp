// writeMultipleFilesMPI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mpi.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using std::string;

int main(int argc, char *argv[])
{
	MPI_Init(&argc, &argv);

	int worldRank;
	MPI_Comm_rank(MPI_COMM_WORLD, &worldRank);
	std::stringstream convert;
	convert << worldRank;
	std::string worldRankName{convert.str()};


	int numberOfProcesses;
	MPI_Comm_size(MPI_COMM_WORLD, &numberOfProcesses);

	std::cout << "Initializing process " << worldRank << " of " << numberOfProcesses << '\n';

	std::ofstream differentTest;
	std::string filename{ "test" + worldRankName + ".txt." };
	std::cout << filename << "\n";

	differentTest.open(filename);

	differentTest << "Initializing process " << worldRank << " of " << numberOfProcesses << '\n';
	
	differentTest.close();


	MPI_Finalize();
    
	return 0;
}

