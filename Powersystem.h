#ifndef POWERSYSTEM_H
#define POWERSYSTEM_H

#include "CityComponent.h"

class Powersystem: public CityComponent{
private:
    double powerLevel;
public:
    Powersystem(int cID, string n, double pLevel);

    void processEvent();
    void supplyPower();
};

#endif
