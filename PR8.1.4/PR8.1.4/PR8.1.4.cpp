#include <iostream>
#include <string>

using namespace std;

bool Include(const string str, const string cs)
{
	bool r = true;
	for (size_t i = 0; i < cs.length(); i++)
		r = r && (str.find(cs[i]) != -1);
	return r;
}

string Change(string& str)
{
	size_t pos = 0;
	while ((pos = str.find('n', pos)) != -1)
		if (str[pos + 1] == 'o')
			str.replace(pos, 2, "***");
	return str;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);

	string cs = "no";
	if (Include(str, cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	string dest = Change(str);
	cout << "Modified string (param) :" << str << endl;
	cout << "Modified string (result) :" << dest << endl;

	return 0;
}
