#include "Database.h"


vector<Person> Database::getUsers()
{
    vector<Person> users;

    std::ifstream infile("Admin/users.txt");
    string userName, pw;
    while (infile >> userName >> pw)
    {
        Person user(userName, pw);
        //user.setName(userName);
        //user.setPassword(pw);
        users.push_back(user);
    }
    return users;
}