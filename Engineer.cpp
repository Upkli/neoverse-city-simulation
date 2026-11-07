#include "Engineer.h"

Engineer::Engineer(string enID, string uname, string encrypPass, string clLevel){
    this->engineerID=enID;
    this->username=uname;
    this->encryptedPassword=encrypPass;
    this->clearanceLevel=clLevel;
}

string Engineer::getUsername(){
    return username;
}
string Engineer::getEncryptedpassword(){
    return encryptedPassword;
}
string Engineer::getClearance(){
    return clearanceLevel;
}
string Engineer::getEngineerid(){
    return engineerID;
}
