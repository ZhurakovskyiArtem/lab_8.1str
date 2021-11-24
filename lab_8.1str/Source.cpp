// ƒано л≥терний р€док, €кий м≥стить посл≥довн≥сть символ≥в s[0], ..., s[n], ...
// 1. ¬и€снити, чи Ї в ц≥й посл≥довност≥ так≥ елементи s[iЦ1] , s[i+1]
// що s[iЦ1] Ц це знак плюс ('+'), а s[i+1] Ц знак м≥нус ('-'),
// та обчислити њх к≥льк≥сть.
// 2. «ам≥нити кожну групу символ≥в s[iЦ1] , s[i] , s[i+1] Ц таких, що
// s[iЦ1] Ц це знак плюс ('+'), а s[i+1] Ц знак м≥нус ('-')
// четв≥ркою з≥рочок "****".
#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
	{
		pos++;
		if (s[pos] == '-')
			k++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
		if (s[pos + 1] == '-')
			s.replace(pos, 2, "*");
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << Count(str) << " groups of ', -'" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
		return 0;
}