#include "DiscreteMaths.h"

DiscreteMaths::DiscreteMaths(){}

float DiscreteMaths::sumX(std::vector<float> vect)
{
    float totalX=0;

    for(int i=0; i < vect.size(); i++)
        totalX = totalX + vect[i];

    return totalX;
}

float DiscreteMaths::sumY(std::vector<float> vect)
{
    float totalY=0;

    for(int i=0; i < vect.size(); i++)
        totalY = totalY + vect[i];

    return totalY;
}


float DiscreteMaths::sumXY(std::vector<float> vect1, std::vector<float> vect2)
{
    float totalXY=0;

    for(int i=0; i < vect1.size(); i++)
        totalXY = totalXY + (vect1[i]*vect2[i]);

    return totalXY;
}

float DiscreteMaths::sumXsumY(std::vector<float> vect1, std::vector<float> vect2)
{
    return (sumX(vect1) * sumY(vect2));
}

float DiscreteMaths::sumXsumX(std::vector<float> vect1, std::vector<float> vect2)
{
    return (sumX(vect1) * sumX(vect2));
}

float DiscreteMaths::sumXquad(std::vector<float> vect)
{
    float totalX=0;

    for(int i=0; i < vect.size(); i++)
        totalX = totalX + (vect[i] * vect[i]);

    return totalX;
}

float DiscreteMaths::SSR(std::vector<float> vect, std::vector<float> vect2, float B0, float B1)
{
    float SSR = 0, YH, XR, YR;

    for(int i=0; i < vect.size(); i++)
    {
        YH = B0+(B1*vect[i]);
        XR = (vect2[i] - YH);
        SSR = SSR + (XR*XR);
    }

    return SSR;
}

float DiscreteMaths::SST(std::vector<float> vect, float YPo)
{
    float SST = 0, XR = 0;

    for(int i=0; i < vect.size(); i++)
    {
        XR =  (vect[i] - YPo);
        SST = SST + (XR*XR);
    }

    return SST;
}
