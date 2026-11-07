#ifndef UTILS_H
#define UTILS_H

#include <string>
#include "Event.h"
using namespace std;

// Predicate used with count_if to check if an Event's description
// contains "Power" (used for the event-filtering requirement, Q3/Q5).
bool aPowerEvent(Event e);

// Predicate used with count_if to check if a string equals "fire"
// (used for the "most common emergency type" report, Q6).
bool isFireEvent(string fs);

// Predicate used with count_if to check if a string equals "flood"
// (used for the "most common emergency type" report, Q6).
bool isFloodEvent(string fl);

// Predicate used with count_if to check if a string equals "earthquake"
// (used for the "most common emergency type" report, Q6).
bool isEarthquakeEvent(string eq);

#endif
