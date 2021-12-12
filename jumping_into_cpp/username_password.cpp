#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username;
	string passwd;

	string stored_username = "varun";
	string stored_passwd = "password";

	cout << "Enter the username" << endl;
	getline(cin, username, '\n');

	cout << "Enter the password" << endl;
	getline(cin, passwd, '\n');

	if ((username == stored_username) && (passwd == stored_passwd))
	{
		cout << "Authentication Successfull" << endl;
	}

	else
	{
		cout << "Authentication Unsuccessfull" << endl;
	}

	return 0;
}