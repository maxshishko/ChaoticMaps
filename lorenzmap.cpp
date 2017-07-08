#include "lorenzmap.h"

LorenzMap::LorenzMap(double x, double y, double z)
{    
    setX(x);
    setY(y);
    setZ(z);
}

void LorenzMap::next()
{
    x = x+dt*a*(y-x);
    y = y+dt*(c*x-y-x*z);
    z = z+dt*(x*y-b*z);
}

void LorenzMap::setRandomInit()
{
    x = 3.+((double)rand())/((double)RAND_MAX);
    y = 1.5+((double)rand())/((double)RAND_MAX);
    z = 15.+((double)rand())/((double)RAND_MAX);
}
