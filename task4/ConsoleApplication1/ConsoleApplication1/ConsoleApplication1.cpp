#include <iostream>
#include <fstream>
using namespace std;
#include <iostream>
#include <stdio.h>
#include <fstream>
#include<string>

int main()
{
    setlocale(LC_ALL, "Russian");
    int bal;
    string name;
    ifstream file("text.txt");

    if (!file.is_open()) {
        cout << "Файл невозможно открыть" << endl;
    }
    else {
        while (getline(file, name)) {
            cout << name << endl;
        }
        file.close(); // Закрываем файл после окончания чтения
    }

    return 0;
}