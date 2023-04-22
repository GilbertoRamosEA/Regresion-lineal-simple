#ifndef DISCRETEMATHS_H
#define DISCRETEMATHS_H
#include <vector>

class DiscreteMaths
{
    public:
        DiscreteMaths();
        float sumX(std::vector<float>);
        float sumY(std::vector<float>);
        float sumXY(std::vector<float>, std::vector<float>);
        float sumXsumY(std::vector<float>, std::vector<float>);
        float sumXsumX(std::vector<float>, std::vector<float>);
        float sumXquad(std::vector<float>);
        float SSR(std::vector<float>, std::vector<float>, float, float);
        float SST(std::vector<float>, float );
};

#endif // DISCRETEMATHS_H
