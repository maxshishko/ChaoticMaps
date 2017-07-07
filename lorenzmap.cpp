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
    srand(time(NULL));
    x = (double)rand()+((double)rand())/((double)RAND_MAX);
    y = (double)rand()+((double)rand())/((double)RAND_MAX);
    z = (double)rand()+((double)rand())/((double)RAND_MAX);
}
