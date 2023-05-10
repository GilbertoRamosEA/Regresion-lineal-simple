#include "DataSet.h"

DataSet::DataSet()
{
    y = {651,762,856,1063,1190,1298,1421,1440,1518};
    x = {23,26,30,34,43,48,52,57,58};
}

std::vector<float> DataSet::getX()
{
    return x;
}

std::vector<float> DataSet::getY()
{
    return y;
}
