#pragma once
#include <iostream>
using namespace std;

class User
{
private:
    string userName;
    string passWord;

public:
    // Constructor to initialize a User object with a username and password.
    User(string userName, string passWord);

    // Setter method to update the username.
    void setUserName(string userName);

    // Setter method to update the password.
    void setPassWord(string passWord);

    // Getter method to retrieve the username.
    string getUserName();

    // Getter method to retrieve the password.
    string getPassWord();
};


