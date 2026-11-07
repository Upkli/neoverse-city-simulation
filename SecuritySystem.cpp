#include "SecuritySystem.h"
#include <iostream>
using namespace std;

SecuritySystem::SecuritySystem(int cID, string n, int tL):CityComponent(cID,n){
    this->threatLevel=tL;
}

void SecuritySystem::processEvent(){
    cout<<"Security system active and fully functional"<<endl;
}

void SecuritySystem::monitorCity(){
    cout<<"citywide surveillance is online"<<endl;
}
