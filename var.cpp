#include "var.h"


void percent(vector<size_t> bins,size_t number_count, vector<size_t> &p)
{

    p.resize(number_count);
    for (int i=0; i<(number_count-1);i++)
    {
        p[i] = (bins[i]*100/number_count);
    }


}
