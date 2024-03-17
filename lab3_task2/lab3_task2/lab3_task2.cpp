#include <iostream>
#include <string>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str;
    int count = 0;

    char mas[22] = { 'А', 'У', 'О', 'Ы', 'И', 'Э', 'Я', 'Ю', 'Ё', 'Е', 'а', 'у', 'о', 'ы', 'и', 'э', 'я', 'ю', 'ё', 'е' };

    cout << "Введите строку\n";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            for (int j = 0; j < 10; j++) {
                if (str[i + 1] == mas[j]) {
                    count++;
                }
            }
        }
    }

    cout << "Количество слов, начинающихся с гласной: \n";
    cout << count;

    return 0;
}