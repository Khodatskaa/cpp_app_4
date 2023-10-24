#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 12);
    cout << "**************************" << endl;
    cout << "*         SALE           *" << endl;
    cout << "**************************" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    cout << "Product: Red-eared freshwater turtle" << endl;
    cout << "Price: $55.99" << endl;
    cout << "Description: Selling 5 red-eared freshwater turtles. Delivery available around the town." << endl;
    cout << "Contact us: by email support@gmail.com" << endl;
    cout << "\t    or phone +380965587399" << endl;

    return 0;
}