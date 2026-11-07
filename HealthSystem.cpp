#include "HealthSystem.h"
#include <iostream>
using namespace std;

HealthSystem::HealthSystem(int cID, string n, int hCnt):CityComponent(cID,n){
    this->hospitalCnt=hCnt;
}

void HealthSystem::processEvent(){
    cout<<"hospital care unit operational"<<endl;
}

void HealthSystem::provideCare(){
    cout<<"Medical care is currently being provided by the Hospital"<<endl;
}
