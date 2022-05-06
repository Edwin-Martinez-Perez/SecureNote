//
// Created by Edwin on 4/3/2022.
//

#ifndef SECURENOTE_USERINTERACTION_H
#define SECURENOTE_USERINTERACTION_H
#include <iostream>

using namespace std;

class UserInteraction {
public:
    void setFileName(string newFileName);
    string getFileName ();
    void createNote();
    void writeNote(string fileName);
    void readNote(string fileName);
    void deleteNote(string fileName);
    static void userMenu();
    static void userCheck();
private:
    string fileName;
};


#endif //SECURENOTE_USERINTERACTION_H
