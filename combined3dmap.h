#ifndef COMBINED3DMAP_H
#define COMBINED3DMAP_H

#include "chaoticmap3d.h"
#include "chaoticmap1d.h"
#include <memory>

class Combined3DMap : public ChaoticMap3D
{
    using uptrChaotiMap1D = std::unique_ptr<ChaoticMap1D>;

    uptrChaotiMap1D xmap;
    uptrChaotiMap1D ymap;
    uptrChaotiMap1D zmap;
public:
    Combined3DMap(uptrChaotiMap1D &&xmap, uptrChaotiMap1D &&ymap, uptrChaotiMap1D &&zmap);

    void setXmap(uptrChaotiMap1D &&xmap);

    void setYmap(uptrChaotiMap1D &&ymap);

    void setZmap(uptrChaotiMap1D &&zmap);

    void next() override ;

    void setRandomInit() override ;

    void setX(double value) override ;
    void setY(double value) override ;
    void setZ(double value) override ;
};

#endif // COMBINED3DMAP_H
