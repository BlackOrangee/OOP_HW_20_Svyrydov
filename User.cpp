#include "User.h"

// Constructor initializes a User with a username and password.
User::User(string userName, string passWord)
{
    this->userName = userName;
    this->passWord = passWord;
}

// Setter method to update the username.
void User::setUserName(string userName)
{
    this->userName = userName;
}

// Setter method to update the password.
void User::setPassWord(string passWord)
{
    this->passWord = passWord;
}

// Getter method to retrieve the username.
string User::getUserName()
{
    return userName;
}

// Getter method to retrieve the password.
string User::getPassWord()
{
    return passWord;
}
