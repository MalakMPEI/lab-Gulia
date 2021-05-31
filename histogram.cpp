#include "histogram.h"


void find_minmax(const vector<double>& numbers, double& min, double& max)
{   if (numbers.size()!=0)
{
    max=numbers[0];
    min=numbers[0];

    for(double elem:numbers)
    {
        if (elem<min)
            min=elem;
        if (elem>max)

            max=elem;
    }
}
void
}


