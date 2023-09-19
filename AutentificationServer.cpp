#include "AutentificationServer.h"

// Constructor: Initializes the authentication server with an initial user.
AutentificationServer::AutentificationServer(User user)
{
	users.push_back(user);
}

// Method to add a user to the list of users managed by the authentication server.
void AutentificationServer::setUser(User user)
{
	users.push_back(user);
}

// Method to authenticate a user.
void AutentificationServer::AutentificateUser(User user)
{
	// Iterate through the list of users.
	for (User u : users)
	{
		// Check if the provided username matches any registered username.
		if (u.getUserName() == user.getUserName())
		{
			// If the usernames match, check if the provided password is correct.
			if (u.getPassWord() == user.getPassWord())
			{
				cout << "Autentification success!" << endl;

				// Authentication succeeded.
				return;
			}
			else
			{
				// Incorrect password.
				throw invalid_argument("Invalid Password");
			}
		}
	}

	// If no matching username is found, throw an exception.
	throw invalid_argument("Invalid username or user not registered");
}