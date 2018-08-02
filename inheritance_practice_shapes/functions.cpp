#include "functions.h"
#include "Circle.h"

int getLargestRadius(const std::vector<Shape*> v)
{
    int max_radius {0};
    for (Shape* element : v)
    {
        Circle* element_as_circ {dynamic_cast<Circle*>(element)};
        if (element_as_circ)
        {
            if ( element_as_circ->getRadius() > max_radius )
            {
                max_radius = element_as_circ->getRadius();
            }
        }
    }
    return max_radius;
}
