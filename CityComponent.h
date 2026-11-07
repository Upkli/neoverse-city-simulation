#ifndef CITYCOMPONENT_H
#define CITYCOMPONENT_H

#include <string>
using namespace std;

class CityComponent {
private:
    int componentID;
    string name;

public:
    CityComponent(int cID, string n);
    ~CityComponent();

    void activate();
    void deactivate();
    string getStatus();
    virtual void processEvent();
};

#endif
