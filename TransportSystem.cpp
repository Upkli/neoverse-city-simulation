#include "TransportSystem.h"
#include <iostream>
using namespace std;

TransportSystem::TransportSystem(int cID, string n, int tFlow):CityComponent(cID,n){
    this->trafficFlow=tFlow;
}

void TransportSystem::processEvent(){
    cout<<"transportsystem responding to the city event taking place"<<endl;
}

void TransportSystem::manageTraffic(){
    cout<<"managing traffic in the city"<<endl;
}
