#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	cout << "Введите строку\n";
	getline(cin, str);
	for (int i = 0; i < (str.size()); i++) {
		if ((str[i] == ' ') && (str[i + 1] == ' ')) {
			str.erase(i + 1, 1);
			i = i - 1;
		}
	}
	cout << "Изменённая строка:";
	cout << str;
	return 0;
}