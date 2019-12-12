#include <iostream>
#include <chrono>
#include <ctime>
#include "Person.h"
#include "Database.h"
using namespace std;



struct loginInfo 
{
    string userName;
    string password;
};


int main(int argc, char* argv[])
{

    // Load 2 main users: Sam and Timmy
    Database db;
    vector<Person> users = db.getUsers();

    /*for(int i = 0; i < users.size(); i++) {
        cout << users[i].getName();
    }*/

    loginInfo login;
    std::cout << "Welcome to Nakatomi Plaza Employee login." << std::endl;
    auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now()); 
    
    cout << ctime(&timenow) << endl; 

    cout << "User name: ";
    cin >> login.userName;
    cout << "Password: ";
    cin >> login.password;
    
    cout << "Enter linux command: ";
    string comd;
    cin >> comd;
    while(comd != "q")
    {
        system(comd.c_str());
        cout << "another one :";
        cin >> comd;
    }
    /*if(checkLogin(login.userName, login.password))
    {
        loginUser(login.userName);
    }*/
    return 0;
}