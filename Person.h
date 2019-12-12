#pragma once
#include <iostream>
#include <string>

using namespace std;
class Person
{
private:
    string userName;
    string pword;

public:
    Person(string userName, string password);
    Person();
    string getName();
    string setName(string name);
    string setPassword(string pw);
    bool comparePasswords(string input);
};