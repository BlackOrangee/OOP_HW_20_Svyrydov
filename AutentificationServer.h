#pragma once
#include <iostream>
#include <vector>
#include "User.h"
#include <stdexcept>
using namespace std;

class AutentificationServer
{
private:
	vector<User> users;
public:
	// Constructor to initialize the authentication server with a list of users.
	AutentificationServer(User);

	// Method to add a user to the server's user list.
	void setUser(User);

	// Method to authenticate a user.
	void AutentificateUser(User);
};

