#ifndef CHAOTICMAP3D_H
#define CHAOTICMAP3D_H


class ChaoticMap3D
{
protected:
    double x = 0;
    double y = 0;
    double z = 0;
public:
    ChaoticMap3D();

    virtual void next() = 0;
    virtual void setRandomInit() = 0;

    virtual double getX() const;
    virtual void setX(double value);
    virtual double getY() const;
    virtual void setY(double value);
    virtual double getZ() const;
    virtual void setZ(double value);
};

#endif // CHAOTICMAP3D_H
