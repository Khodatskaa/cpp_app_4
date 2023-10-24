#include <iostream>
#include <Windows.h>  
using namespace std;

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  
    SetConsoleTextAttribute(hConsole, 1);  
    cout << "\t\t\t\t\tEvery hunter wants to know" << endl;
    SetConsoleTextAttribute(hConsole, 2);
    cout << "\t\t\t\t\tWhere the pheasants go" << endl;
    SetConsoleTextAttribute(hConsole, 3);
    cout << "\t\t\t\t\tWhen the snow deep and crisp and even" << endl;
    SetConsoleTextAttribute(hConsole, 4);
    cout << "\t\t\t\t\tAll about." << endl;
    SetConsoleTextAttribute(hConsole, 5);  
    cout << "\t\t\t\t\tIt had such charming prospects then" << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\t\t\t\tOf nice warm breeding pens" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\t\t\t\tWhere the birds were gonna go to" << endl;
    SetConsoleTextAttribute(hConsole, 8);
    cout << "\t\t\t\t\tAnd make a lot of money" << endl;

    return 0;
}
