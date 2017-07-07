#ifndef PWLCM_H
#define PWLCM_H

#include "chaoticmap1d.h"
#include <cmath>
#include <ctime>
#include <cstdlib>

class PWLCM : public ChaoticMap1D
{
    double param = 0.3333;
public:
    PWLCM(){setRandomInit();}
    PWLCM(double init);
    PWLCM(double init, double param);

    double next();
    void setRandomInit();

    double pwlcm(double x);

    double getParam() const;
    void setParam(double value);
    void setX(double value);
};

#endif // PWLCM_H
