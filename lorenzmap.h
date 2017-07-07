#ifndef LORENZMAP_H
#define LORENZMAP_H

#include <cmath>
#include <ctime>
#include <cstdlib>

#include "chaoticmap3d.h"

class LorenzMap : public ChaoticMap3D
{
    double dt = 0.0001;
    double a = 10., b = 8./3., c = 28.;
public:
    LorenzMap(){setRandomInit();}
    LorenzMap(double x, double y, double z);

    void next();
    void setRandomInit();
};

#endif // LORENZMAP_H
