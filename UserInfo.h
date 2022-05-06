//
// Created by Edwin on 4/3/2022.
//

#ifndef SECURENOTE_USERINFO_H
#define SECURENOTE_USERINFO_H
#include <iostream>
#include <map>
using namespace std;

class UserInfo {
friend class UserInteraction;
public:

//Constructor
    UserInfo(string firstName, string lastName, string email, int password);
//Setters
    void setUserName(string);
    void setPassword(int);
    void setFirstName(string);
    void setLastName(string);
    void setEmail(string);
    void createID();
//Getters
    string getUserName();
    int getPassword();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getID();

//create addUser
static void addUser(int , string);
static map <int, string> userMap;

//Private Variables
private:
string userName;
string userFirstName;
string userLastName;
string userEmail;
int userPassword;
int userIDNumber;
};
#endif //SECURENOTE_USERINFO_H
