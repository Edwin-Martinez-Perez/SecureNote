//
// Created by Edwin on 4/3/2022.
//

#ifndef SECURENOTE_USERINTERACTION_H
#define SECURENOTE_USERINTERACTION_H
#include <iostream>
using namespace std;

class UserInteraction {
public:

    void setFileName(string newFileName) {
        fileName = newFileName;
    }
    string getFileName (){
        return fileName;
    }
    void createNote() {
        this function will allow the user to create a brand new note
    }
    void writeNote(string fileName) {
        this function will allow the user to write to the note
    }
    void readNote(string fileName) {
        this function will allow the user to view notes and also choose to edit the note or delete the note. I will call functions deleteNote and writeNote depending on what action they want to perform.
    }
    void deleteNote(string fileName) {
        delete any note the user wants to get rid of
    }
    void userMenu(string fileName) {
        this is where I will prompt the user to make a choice in what they want to do
    }


private:
    string fileName;
};


#endif //SECURENOTE_USERINTERACTION_H
