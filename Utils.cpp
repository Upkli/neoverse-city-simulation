#include "Utils.h"

bool aPowerEvent(Event e) {
    if (e.getEvent().find("Power")!=string::npos ){
        return true;
    }
    else{
        return false;
    }
}

bool isFireEvent(string fs){
    if (fs=="fire"){
        return true;
    }
    else{
        return false;
    }
}

bool isFloodEvent(string fl){
    if (fl=="flood"){
        return true;
    }
    else{
        return false;
    }
}

bool isEarthquakeEvent(string eq){
    if (eq=="earthquake"){
        return true;
    }
    else{
        return false;
    }
}
