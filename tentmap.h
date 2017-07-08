#ifndef TENTMAP_H
#define TENTMAP_H

#include <cmath>
#include <cstdlib>

#include "chaoticmap1d.h"

class TentMap : public ChaoticMap1D
{
public:
    TentMap(){setRandomInit();}
    TentMap(double init);

    void setX(double value);
    double next();
    void setRandomInit();
};

#endif // TENTMAP_H
