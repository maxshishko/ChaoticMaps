#ifndef CHAOTICMAP_H
#define CHAOTICMAP_H


class ChaoticMap1D
{
protected:
    double x = 0;
public:
    ChaoticMap1D(){}
    ChaoticMap1D(double init);
    virtual double next() = 0;
    virtual void setRandomInit() = 0;

    double getX() const;
    virtual void setX(double value);
};

#endif // CHAOTICMAP_H
