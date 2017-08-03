#include "combined3dmap.h"

Combined3DMap::Combined3DMap(uptrChaotiMap1D&& xmap, uptrChaotiMap1D&& ymap, uptrChaotiMap1D&& zmap):
    xmap(std::move(xmap)), ymap(std::move(ymap)), zmap(std::move(zmap))
{
    x = xmap->getX();
    y = ymap->getX();
    z = zmap->getX();
}

void Combined3DMap::next()
{
    x = xmap->next();
    y = ymap->next();
    z = zmap->next();
}

void Combined3DMap::setRandomInit()
{
    xmap->setRandomInit();
    ymap->setRandomInit();
    zmap->setRandomInit();
    x = xmap->getX();
    y = ymap->getX();
    z = zmap->getX();
}

void Combined3DMap::setX(double value)
{
    xmap->setX(value);
    x = xmap->getX();
}

void Combined3DMap::setY(double value)
{
    ymap->setX(value);
    y = ymap->getX();
}

void Combined3DMap::setZ(double value)
{
    zmap->setX(value);
    z = zmap->getX();
}

void Combined3DMap::setXmap(uptrChaotiMap1D &&xmap) {
    Combined3DMap::xmap =std:: move(xmap);
}

void Combined3DMap::setYmap(uptrChaotiMap1D &&ymap) {
    Combined3DMap::ymap = std::move(ymap);
}

void Combined3DMap::setZmap(uptrChaotiMap1D &&zmap) {
    Combined3DMap::zmap = std::move(zmap);
}
