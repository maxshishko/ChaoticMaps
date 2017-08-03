#ifndef BAKER3DMAP_H
#define BAKER3DMAP_H

#include <cmath>
#include <cstdlib>

#include "chaoticmap3d.h"

class Baker3DMap : public ChaoticMap3D
{
public:
    Baker3DMap(){setRandomInit();}
    Baker3DMap(double x, double y, double z);

    void next() override ;
    void setRandomInit() override ;

    void setX(double value) override ;
    void setY(double value) override ;
    void setZ(double value) override ;
private:
    double toRange(double value);
};

#endif // BAKER3DMAP_H
