// Create a program for user authentication. 
// Create a class called User with fields for the username and password. 
// Implement an authentication system where the user must enter their username and password. 
// The entered data is compared with the user data in the system. 
// If the username or password is incorrect, raise an AuthenticationException.
//

#include <iostream>
#include <stdexcept>
#include "AutentificationServer.h"
#include "User.h";
using namespace std;

int main()
{
	// Create an AuthenticationServer object and initialize it with an initial user.
	AutentificationServer server(User("username1", "userpass1"));

	// Add more users to the server.
	server.setUser(User("username2", "userpass2"));
	server.setUser(User("username3", "userpass3"));
	server.setUser(User("username4", "userpass4"));
	server.setUser(User("username5", "userpass5"));


	cout << "Try 1:" << endl;
	try
	{
		// Attempt to authenticate "username3" with "userpass3".
		server.AutentificateUser(User("username3", "userpass3"));
	}
	catch (const invalid_argument& e)
	{
		// Print an error message if authentication fails.
		cerr << e.what() << endl;
	}


	cout << endl << "Try 2:" << endl;
	try
	{
		// Attempt to authenticate "username3" with an incorrect password.
		server.AutentificateUser(User("username3", "userpass1"));
	}
	catch (const invalid_argument& e)
	{
		// Print an error message if authentication fails.
		cerr << e.what() << endl;
	}


	cout << endl << "Try 3:" << endl;
	try
	{
		// Attempt to authenticate a non-existing user.
		server.AutentificateUser(User("username6", "userpass6"));
	}
	catch (const invalid_argument& e)
	{
		// Print an error message if authentication fails.
		cerr << e.what() << endl;
	}
}