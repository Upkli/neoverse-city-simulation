#include "Powersystem.h"
#include <iostream>
using namespace std;

Powersystem::Powersystem(int cID, string n, double pLevel): CityComponent(cID,n){
    this->powerLevel=pLevel;
}

void Powersystem::processEvent(){
    cout<<"powersystem responding to the city event"<<endl;
}

void Powersystem::supplyPower(){
    cout<<"providing power to the grid"<<endl;
}
