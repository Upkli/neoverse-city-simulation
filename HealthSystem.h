#ifndef HEALTHSYSTEM_H
#define HEALTHSYSTEM_H

#include "CityComponent.h"

class HealthSystem: public CityComponent{
private:
    int hospitalCnt;
public:
    HealthSystem(int cID, string n, int hCnt);

    void processEvent();
    void provideCare();
};

#endif
