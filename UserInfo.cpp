//Edwin Martinez
//CSCE 306; Spring 2022
//UserInfo.cpp

//main driver file for UserInfo.h

#include "UserInfo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>
#include <random>
using namespace std;

//Contructor
UserInfo::UserInfo(string first, string last, string email, int password)
    : userFirstName{first}, userLastName{last}, userEmail{email}, userPassword{password}
    {}
//Setters
void UserInfo::setUserName(string newUserName) {
    this -> userName = newUserName;
}
void UserInfo:: setFirstName(string newFirstName) {
    this -> userFirstName = newFirstName;
}
void UserInfo:: setLastName(string newLastName) {
    this -> userLastName = newLastName;
}
void UserInfo:: setEmail(string newEmail) {
    this -> userEmail = newEmail;
}
void UserInfo:: setPassword(int newPassword) {
    this -> userPassword = newPassword;
}

//getters
string UserInfo::getUserName() {
    return userName;
}
string UserInfo:: getFirstName () {
    return userFirstName;
}
string UserInfo :: getLastName() {
    return userLastName;
}
string UserInfo:: getEmail () {
    return userEmail;
}
int UserInfo:: getPassword() {
    return userPassword;
}
int UserInfo::getID()  {
    return userIDNumber;
}
//Create ID
void UserInfo:: createID() {
    int randomNumber = (rand() % 1000) + 1;
    cout << randomNumber << endl;
}

//adds user to map
void UserInfo::addUser(int newPassword, string userName) {
    userMap[newPassword] = userName;
}



