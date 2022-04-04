//
// Created by Edwin on 4/3/2022.
//

#ifndef SECURENOTE_PERSON_H
#define SECURENOTE_PERSON_H
#include <iostream>
using namespace std;

class Person {

public:
    //Contructor
    Person(string firstName, string lastName) {
        setFirstName(firstName);
        setLastName(lastName);
    }

//Setters
    void setFirstName(string newFirstName) {
      newFirstName = newFirstName;

    }
    void setLastName(string newLastName) {
        lastName = newLastName;
    }
    void setEmail(string newEmail) {
        userEmail = newEmail;
    }
    void setPassword(string newPassword) {
        userPassword = newPassword;
    }

//getters
    string getFirstName () {
        return firstName;
    }
    string getLastName() {
        return lastName;
    }
    string getEmail () {
        return userEmail;
    }
    string getPassword() {
        return userPassword;
    }

//Encryption and decryption
    int enAndDecrypt () {
        return 0;
    }

//Private Variables
private:
string firstName;
string lastName;
string userEmail;
string userPassword;

};


#endif //SECURENOTE_PERSON_H
