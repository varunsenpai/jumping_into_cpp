#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int check_creds(vector<pair<string, string>>&, string, string);

int main()
{
	string username;
	string passwd;

	int flag = 0;

	vector<pair<string, string>> s1;

	s1.push_back(make_pair("puppala", "password1"));
	s1.push_back(make_pair("puppala1", "password2"));
	s1.push_back(make_pair("varun", "password"));

	cout << "Enter the username" << endl;
	getline(cin, username, '\n');

	cout << "Enter the password" << endl;
	getline(cin, passwd, '\n');

	//check the credentials
	auto ret_val = check_creds(s1, username, passwd);

	cout << "Done with return value " << ret_val << endl;
	
	return 0;
}

int check_creds(vector<pair<string, string>>& s1, string username, string passwd)
{
	int flag = 0;

	for (auto i = s1.begin(); i != s1.end(); ++i)
	{
		if ((username == i->first) && (passwd == i->second))
		{
			cout << "Authentication Successfull" << endl;
			flag = 1;
			return 1;
		}

	}

	if (!flag)
	{
		cout << "Authentication Failure" << endl;
		return 0;
	}

}