#include "DataSet.h"
#include "DiscreteMaths.h"
#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    DataSet ds;
    DiscreteMaths dm;
    float B1, B0, YH, YPo ,XP = 0;
    float sumX, sumY, sumXY, sumXsumY, sumXsumX, SumXquad, SSR, SST, RSquared;
    vector<float>x;
    vector<float>y;

    x = ds.getX();
    y = ds.getY();
    sumX = dm.sumX(x);
    sumY = dm.sumY(y);
    sumXY = dm.sumXY(x,y);
    sumXsumY = dm.sumXsumY(x,y);
    sumXsumX = dm.sumXsumX(x,x);
    SumXquad = dm.sumXquad(x);
    B1 = ((9*sumXY)-sumXsumY)/((9*SumXquad)-sumXsumX);
    B0 = (sumY-(B1*sumX))/9;
    YPo = sumY/9;

    cout << "Ingrese el valor de x para predecir y: ";
    cin >> XP;

    cout << "B0 = " << B0 << endl;
    cout << "B1 = " << B1 << endl;

    YH = B0+(B1*XP);

    cout << "Valor de Y de hat = " << YH << endl;

    SSR = dm.SSR(x,y,B0,B1);
    SST = dm.SST(y,YPo);
    RSquared = 1 - (SSR/SST);

    cout << "Valor de SSR = " << SSR << endl;
    cout << "Valor de SST = " << SST << endl;
    cout << "Valor de R-squared = " << RSquared << endl;

    return EXIT_SUCCESS;
}
