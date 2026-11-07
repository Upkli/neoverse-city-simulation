#ifndef ENGINEER_H
#define ENGINEER_H

#include <string>
using namespace std;

class Engineer{
private:
    string engineerID;
    string username;
    string encryptedPassword;
    string clearanceLevel;
public:
    Engineer(string enID, string uname, string encrypPass, string clLevel);

    string getUsername();
    string getEncryptedpassword();
    string getClearance();
    string getEngineerid();
};

#endif
