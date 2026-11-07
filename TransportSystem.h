#ifndef TRANSPORTSYSTEM_H
#define TRANSPORTSYSTEM_H

#include "CityComponent.h"

class TransportSystem: public CityComponent{
private:
    int trafficFlow;

public:
    TransportSystem(int cID, string n, int tFlow);

    void processEvent();
    void manageTraffic();
};

#endif
