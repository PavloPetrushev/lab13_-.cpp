// lab13_Петрушев.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

double factorial(int n);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть номер члена ряду: ";
    cin >> n;

    double chlen = factorial(n);
    cout << "Член " << n << " ряду: " << chlen << endl;

    return 0;
}

double factorial(int n) {
    
    if (n == 0) {
        return 30.0;
    }
  
    else if (n == 1) {
        return 10.0;
    }
    
    else {
        return 10.0 / pow(3.0, n);
    }
}
