#ifndef EVENT_H
#define EVENT_H

#include <string>
using namespace std;

class Event{
private:
    string eventDescription;

public:
    Event(string E);

    string getEvent();
};

#endif
