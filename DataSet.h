#ifndef DATASET_H
#define DATASET_H
#include <vector>

class DataSet {
    private:
        std::vector<float> x;
        std::vector<float> y;

    public:
        DataSet();
        std::vector<float> getX();
        std::vector<float> getY();
};

#endif // DATASET_H
