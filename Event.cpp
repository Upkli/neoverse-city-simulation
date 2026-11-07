#include "Event.h"

Event::Event(string E){
    this->eventDescription=E;
}

string Event::getEvent(){
    return eventDescription;
}
