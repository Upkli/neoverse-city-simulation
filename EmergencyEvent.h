#ifndef EMERGENCYEVENT_H
#define EMERGENCYEVENT_H

#include <string>
using namespace std;

class EmergencyEvent{
private:
    string emerevent;

public:
    EmergencyEvent(string EE);

    string getEmergencyEvent();
};

#endif
