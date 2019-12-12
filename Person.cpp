#include "Person.h"

Person::Person(string _userName, string _password)
{
 userName = _userName;
 pword = _password;
}

Person::Person()
{
 userName = "Unknown";
 pword = "";
}

string Person::getName() {return userName;}
string Person::setName(string name) {userName = name;};
string Person::setPassword(string pw) {pw = pword;};

bool Person::comparePasswords(string input, string userName)
{
    return false;
}