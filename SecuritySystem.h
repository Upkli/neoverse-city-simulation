#ifndef SECURITYSYSTEM_H
#define SECURITYSYSTEM_H

#include "CityComponent.h"

class SecuritySystem : public CityComponent{
private:
    int threatLevel;
public:
    SecuritySystem(int cID, string n, int tL);

    void processEvent();
    void monitorCity();
};

#endif
