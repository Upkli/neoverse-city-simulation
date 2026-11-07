#include "EmergencyEvent.h"

EmergencyEvent::EmergencyEvent(string EE){
    this->emerevent=EE;
}

string EmergencyEvent::getEmergencyEvent(){
    return emerevent;
}
