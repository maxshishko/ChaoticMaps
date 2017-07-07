#ifndef LOGISTIC_H
#define LOGISTIC_H

#include <cmath>
#include <ctime>
#include <cstdlib>

#include "chaoticmap1d.h"

class LogisticMap : public ChaoticMap1D
{
    double param = 3.9999;
public:
    LogisticMap();
    LogisticMap(double init);
    LogisticMap(double init, double param);

    double next();
    void setRandomInit();
    double getParam() const;
    void setParam(double value);
    void setX(double value);
};

#endif // LOGISTIC_H
