#ifndef PWLCM_H
#define PWLCM_H

#include "chaoticmap1d.h"
#include <cmath>
#include <cstdlib>

class PWLCM : public ChaoticMap1D
{
    double param = 0.3333;
public:
    PWLCM();
    PWLCM(double init, double param = 0.3333);


    double next() override ;
    void setRandomInit() override ;

    double pwlcm(double x);

    double getParam() const;
    void setParam(double value);
    void setX(double value) override ;
};

#endif // PWLCM_H
