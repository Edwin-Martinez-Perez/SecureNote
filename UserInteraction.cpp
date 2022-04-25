//
// Created by Edwin on 4/3/2022.
//

#include "UserInteraction.h"
#include "UserInfo.h"
#include <iostream>

using namespace std;

void UserInteraction:: userMenu() {
    int userInput;
    cout << "Welcome To SecureNote!" << endl;
    cout <<"Please enter a 1 to create a new note and edit" << endl <<"Please enter a 2 view and edit a current note"<< endl << "Please enter a 3 to delete a note" << endl;
    cin >> userInput;
    if (userInput == 1) {
        cout << "Created note function is under construction" << endl;
    }else if (userInput==2) {
        cout << "This function is under construction" << endl;
    }else if(userInput == 3) {
        cout << "Delete function is under construction" << endl;
    }else {
        cout << "Invalid input. Try again" << endl;
        UserInteraction:: userMenu();
    }
}

void UserInteraction:: userCheck () {
    bool exit = true;
    bool notExists;
    int userInput;
    cout << "Do you already have an account? Enter 1 for 'yes'. Enter 2 for 'no'" << endl;
    cin >> userInput;
    if (userInput == 1) {
        int password;
        cout << "Please enter your password" << endl;
        cin >> password;
        notExists = UserInfo:: userMap.find(password)== UserInfo:: userMap.end();
        if (notExists == false) {
            UserInteraction:: userMenu();
        }else {
            cout<< "Incorrect password. Please try again" << endl;
            userCheck();
        }
    } else if (exit == 2) {
        int newPassword;
        string newUserName;
        cout << "Please create a username that only contains letters: " << endl;
        cin >> newUserName;
        cout << "Please create a password that only contains numbers: " << endl;
        cin >> newPassword;
        UserInfo::addUser(newPassword, newUserName);
    }
}