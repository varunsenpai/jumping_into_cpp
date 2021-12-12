#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 = "";
	string s2 = "";

	cin >> s1;
	cin >> s2;

	auto s3 = s1 + "" + s2;

	cout << "\n";

	cout << s3;

	return 0;
}