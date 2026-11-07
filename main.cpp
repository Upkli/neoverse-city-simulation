#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <fstream>

#include "Engineer.h"
#include "Event.h"
#include "EmergencyEvent.h"
#include "CityComponent.h"
#include "Powersystem.h"
#include "TransportSystem.h"
#include "HealthSystem.h"
#include "SecuritySystem.h"
#include "Utils.h"

using namespace std;

int main(){
string inusername;
string inpassword;
cout<<"enter your username please"<<endl;
cin>>inusername;
cout<<"enter your password please"<<endl;
cin>>inpassword;

vector<Engineer>engineersv;
Engineer e1("ENG001","engineer_one","Pass1234","High");
Engineer e2 ("ENG002","engineer_two","Pass5678","Medium");
Engineer e3 ("ENG003","engineer_three","Pass9012","Low");
engineersv.push_back(e1);
engineersv.push_back(e2);
engineersv.push_back(e3);

vector<double>sensorReadingsv;
double sr1=6.0;
double sr2=7.0;
double sr3=9.0;
sensorReadingsv.push_back(sr1);
sensorReadingsv.push_back(sr2);
sensorReadingsv.push_back(sr3);

list<string>historicalcityLogsv;

historicalcityLogsv.push_back("power disruption in city block a2");
historicalcityLogsv.push_back("crash at 113st intersection");
historicalcityLogsv.push_back("power failure in city block b3");



bool matchfound=false;
for (vector<Engineer>::iterator it = engineersv.begin();it != engineersv.end();it++){
    if (it->getUsername()==inusername&&it->getEncryptedpassword()==inpassword ){
        matchfound=true;
    }
}
if (matchfound){
    cout<<"login success(:"<<endl;
}
else {
    cout<<"login failed"<<endl;
}

for (vector<double>::iterator sensorreadingIt = sensorReadingsv.begin();sensorreadingIt != sensorReadingsv.end();sensorreadingIt++){
cout<<*sensorreadingIt<<endl;
}


for (list<string>::iterator histlogIt = historicalcityLogsv.begin();histlogIt != historicalcityLogsv.end();histlogIt++){
cout<<*histlogIt<<endl;
}

sensorReadingsv.erase(sensorReadingsv.begin());
historicalcityLogsv.remove("power disruption in city block a2");

sort(sensorReadingsv.begin(), sensorReadingsv.end());
for (vector<double>::iterator sensorreadingIt = sensorReadingsv.begin(); sensorreadingIt != sensorReadingsv.end(); sensorreadingIt++){
    cout << *sensorreadingIt << endl;}

vector<double>::iterator result = find(sensorReadingsv.begin(), sensorReadingsv.end(), 9.0);
if (result != sensorReadingsv.end()) {
    cout << "9.0 found" << endl;
}
else{
    cout<<"9.0 has not been found"<<endl;
}

vector<double>::iterator minIt= min_element(sensorReadingsv.begin(),sensorReadingsv.end());
cout<<"the minimum is:"<<*minIt<<endl;
vector<double>::iterator maxIt= max_element(sensorReadingsv.begin(),sensorReadingsv.end());
cout<<"the maximum is:"<<*maxIt<<endl;

queue<Event>cityEventsQueue;
Event ev1("Traffic accident");
Event ev2 ("Power failure");
Event ev3 ("Network overload");
Event ev4 ("Weather alert");
cityEventsQueue.push(ev1);
cityEventsQueue.push(ev2);
cityEventsQueue.push(ev3);
cityEventsQueue.push(ev4);


while (!cityEventsQueue.empty()){
cout<<cityEventsQueue.front().getEvent()<<endl;;
   cityEventsQueue.pop();
}

stack<EmergencyEvent>EmergencyEventstack;
EmergencyEvent ee1("flood");
EmergencyEvent ee2("earthquake");
EmergencyEvent ee3("fire");
EmergencyEvent ee4("power blackout");
EmergencyEventstack.push(ee1);
EmergencyEventstack.push(ee2);
EmergencyEventstack.push(ee3);
EmergencyEventstack.push(ee4);

while (!EmergencyEventstack.empty()){
cout<<EmergencyEventstack.top().getEmergencyEvent()<<endl;;
   EmergencyEventstack.pop();
}

vector<Event>eventsv;
Event eve1("Traffic accident");
Event eve2 ("Power failure");
Event eve3 ("Network overload");
Event eve4 ("Weather alert");
eventsv.push_back(eve1);
eventsv.push_back(eve2);
eventsv.push_back(eve3);
eventsv.push_back(eve4);

int count = count_if(eventsv.begin(),eventsv.end(), aPowerEvent);
cout<<count<<endl;

cout<<"the total events processed is :"<<eventsv.size()<<endl;

vector<CityComponent*>everySystemv;

everySystemv.push_back(new Powersystem(1010,"Grid 1.0A",85.5));
everySystemv.push_back(new HealthSystem(1020,"Main hospital",30));
everySystemv.push_back(new TransportSystem(1030,"highway bridge no.16",45));
everySystemv.push_back(new SecuritySystem(1040,"citywide surveillance system",6));
for (vector<CityComponent*>::iterator it=everySystemv.begin() ; it!=everySystemv.end(); it++){
    (*it)->processEvent();
}

vector<string>emergencyReportvtr;
emergencyReportvtr.push_back("flood");
emergencyReportvtr.push_back("fire");
emergencyReportvtr.push_back("fire");
emergencyReportvtr.push_back("earthquake");
emergencyReportvtr.push_back("fire");
int fireCount = count_if(emergencyReportvtr.begin(),emergencyReportvtr.end(),isFireEvent);
int floodCount = count_if(emergencyReportvtr.begin(),emergencyReportvtr.end(),isFloodEvent);
int earthquakeCount = count_if(emergencyReportvtr.begin(),emergencyReportvtr.end(),isEarthquakeEvent);
cout<<"fire events:"<<fireCount<<endl;

int highestCount = fireCount;
string mostCommonEmergencyType="fire";

if (floodCount>highestCount){
    highestCount=floodCount;
    mostCommonEmergencyType="flood";
}
else if (earthquakeCount>highestCount){
    highestCount=earthquakeCount;
    mostCommonEmergencyType="earthquake";
}
cout<<"The most common emergency type is "<<mostCommonEmergencyType<<" and it occurred "<<highestCount<<" number of times in the city"<<endl;

vector<double>avrrtv;
double rt1=2.0;
double rt2=4.0;
double rt3=6.0;
double rt4=8.0;
double rt5=10.0;
double rt6=300.0;
avrrtv.push_back(rt1);
avrrtv.push_back(rt2);
avrrtv.push_back(rt3);
avrrtv.push_back(rt4);
avrrtv.push_back(rt5);
avrrtv.push_back(rt6);

double total=0;
double average;
for (int i=0;i<avrrtv.size();i++){
    total+=avrrtv[i];
}
average=total/avrrtv.size();
cout<<average<<endl;

cout<<"System load summary:"<<endl;
cout<<""<<endl;
cout<<"Total events processed"<<eventsv.size()<<endl;
cout<<"Sensor readings output"<<sensorReadingsv.size()<<endl;
cout<<"Engineers"<<engineersv.size()<<endl;
cout<<"Emergencies"<<emergencyReportvtr.size()<<endl;
cout<<"Average response times"<<avrrtv.size()<<endl;
cout<<""<<endl;
cout<<"...End of summary..."<<endl;

ofstream engineersoutFile("engineers.dat", ios::binary);
if (!engineersoutFile){
    cout<<"An Error occured: couldn't open engineers data file for writing"<<endl;
    return 1;
}
for (vector<Engineer>::iterator it=engineersv.begin(); it!= engineersv.end();it++){
    engineersoutFile<<it->getEngineerid()<<endl;
    engineersoutFile<<it->getUsername()<<endl;
    engineersoutFile<<it->getEncryptedpassword()<<endl;
    engineersoutFile<<it->getClearance()<<endl;
}
engineersoutFile.close();

ifstream engineersinFile("engineers.dat",ios::binary);
if (!engineersinFile){
    cout<<"An Error occured: couldn't open engineers data file for reading "<<endl;
    return 1;
}

vector<Engineer> loadedEngineersv;
string id, uname, encPass, clearance;

while (getline(engineersinFile, id)) {
    getline(engineersinFile, uname);
    getline(engineersinFile, encPass);
    getline(engineersinFile, clearance);
    Engineer loadedEngineer(id, uname, encPass, clearance);
    loadedEngineersv.push_back(loadedEngineer);
}

for (vector<Engineer>::iterator it=loadedEngineersv.begin(); it!= loadedEngineersv.end();it++){
cout<<it->getEngineerid()<<endl;
cout<<it->getUsername()<<endl;
cout<<it->getEncryptedpassword()<<endl;
cout<<it->getClearance()<<endl;
}

engineersinFile.close();

ofstream eventsoutFile("events.dat" , ios::binary);
if (!eventsoutFile){
    cout<<"An Error occured: couldn't open events data file"<<endl;
    return 1;
}
for (vector<Event>::iterator it=eventsv.begin(); it!= eventsv.end();it++){
    eventsoutFile << it->getEvent() << endl;

}
eventsoutFile.close();

ifstream eventsinFile("events.dat",ios::binary);
if (!eventsinFile){
    cout<<"An Error occured: couldn't open events data file for reading "<<endl;
    return 1;
}

vector<Event> loadedEventv;
string edescrip;
while (getline(eventsinFile, edescrip)) {
    Event loadedEvent(edescrip);
    loadedEventv.push_back(loadedEvent);
}

for (vector<Event>::iterator it=loadedEventv.begin(); it!= loadedEventv.end();it++){
cout<<it->getEvent()<<endl;
}

eventsinFile.close();



ofstream citylogsoutFile("city_logs.dat" , ios::binary);
if (!citylogsoutFile){
    cout<<"An Error occured: couldn't open city logs data file"<<endl;
    return 1;
}
for (list<string>::iterator histlogIt = historicalcityLogsv.begin();histlogIt != historicalcityLogsv.end();histlogIt++){
    citylogsoutFile << *histlogIt<< endl;


}
citylogsoutFile.close();

ifstream citylogsinFile("city_logs.dat",ios::binary);
if (!citylogsinFile){
    cout<<"An Error occured: couldn't open city logs data file for reading "<<endl;
    return 1;
}

list<string>loadedLogsv;
string histlog;
while (getline(citylogsinFile, histlog)) {
    loadedLogsv.push_back(histlog);
}

for (list<string>::iterator histlogIt = loadedLogsv.begin();histlogIt != loadedLogsv.end();histlogIt++){
cout<<*histlogIt<<endl;
}

citylogsinFile.close();

ofstream configFile("config.txt");
if (!configFile){
    cout<<"error,unfortunately couldnt open configuration file"<<endl;
    return 1;
}

configFile<<"Configuration file 0.1010"<<endl;
configFile<<""<<endl;
configFile<<"Mohameds NeoVerse: AI City Survival System (Console-Based C++ Game Engine)"<<endl;
configFile<<"Max no. of engineers authorized is 3"<<endl;
configFile<<"Game version 1.015468"<<endl;
configFile<<""<<endl;
configFile<<"...End of configuration file..."<<endl;
configFile.close();


ofstream exportfile("city_logs_export.csv");
if (!exportfile){
    cout<<"error,unfortunately couldnt open export file"<<endl;
    return 1;
}

for (list<string>::iterator histlogIt = historicalcityLogsv.begin();histlogIt != historicalcityLogsv.end();histlogIt++){
    exportfile << *histlogIt<< endl;
}
exportfile.close();


}
