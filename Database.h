#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include <sstream>
#include <fstream>

using namespace std;
class Database
{
public:
    static vector<Person> getUsers();
};