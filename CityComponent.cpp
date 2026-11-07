#include "CityComponent.h"
#include <iostream>
using namespace std;

CityComponent::CityComponent(int cID, string n){
    this->componentID=cID;
    this->name=n;
}

CityComponent::~CityComponent(){
    cout<<"city component destroyed"<<endl;
}

void CityComponent::activate(){
    cout<<"component has been activated"<<endl;
}
void CityComponent::deactivate(){
    cout<<"component has been deactivated"<<endl;
}

string CityComponent::getStatus(){
    return name+"is active";
}

void CityComponent::processEvent() {
}
