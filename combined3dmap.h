#ifndef COMBINED3DMAP_H
#define COMBINED3DMAP_H

#include "chaoticmap3d.h"
#include "chaoticmap1d.h"

class Combined3DMap : public ChaoticMap3D
{
    using uptrChaotiMap1D = std::unique_ptr<ChaoticMap1D>;

    uptrChaotiMap1D xmap;
    uptrChaotiMap1D ymap;
    uptrChaotiMap1D zmap;
public:
    Combined3DMap(uptrChaotiMap1D xmap, uptrChaotiMap1D ymap, uptrChaotiMap1D zmap);

    void next();

    void setRandomInit();

    void setX(double value);
    void setY(double value);
    void setZ(double value);
};

#endif // COMBINED3DMAP_H
