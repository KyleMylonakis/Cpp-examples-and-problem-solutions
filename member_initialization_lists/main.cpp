#include <iostream>
#include <cstdint>

typedef std::uint8_t uint_t;

class RGBA 
{
private:
    uint_t m_red;
    uint_t m_green;
    uint_t m_blue;
    uint_t m_alpha;
public:
    RGBA( uint_t red = 0, uint_t green = 0, uint_t blue = 0, uint_t alpha = 255)
    : m_red { red },
    m_green { green },
    m_blue { blue },
    m_alpha { alpha }
    {
    }

    void print()
    {
        std::cout << "r= " << static_cast<int>(m_red)
            << " g= " << static_cast<int>(m_green)
            << " b= " << static_cast<int>(m_blue)
            << " a= " << static_cast<int>(m_alpha) << std::endl;
    }
    
};

int main()
{
    RGBA teal(0,127,127);
    teal.print();

    return 0;
}