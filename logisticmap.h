#ifndef LOGISTIC_H
#define LOGISTIC_H

#include <cmath>
#include <cstdlib>

#include "chaoticmap1d.h"

class LogisticMap : public ChaoticMap1D
{
    double param;
public:
    explicit LogisticMap(double init, double param = 3.9999);

    double next() override ;
    void setRandomInit() override ;
    double getParam() const;
    void setParam(double value);
    void setX(double value) override ;
};

#endif // LOGISTIC_H
