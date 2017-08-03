#ifndef TENTMAP_H
#define TENTMAP_H

#include <cmath>
#include <cstdlib>

#include "chaoticmap1d.h"

class TentMap : public ChaoticMap1D
{
public:
    TentMap();

    explicit TentMap(double init);

    void setX(double value) override ;
    double next() override ;
    void setRandomInit() override ;
};

#endif // TENTMAP_H
