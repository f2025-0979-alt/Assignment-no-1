#include <iostream>
using namespace std;
int main()
{
    int number_1, number_2;
    cout << "Enter the first number  :" << endl;
    cin >> number_1;
    cout << "Enter the second number :" << endl;
    cin >> number_2;
    cout << "You entered first number   :" << number_1 << endl;
    cout << "You entered Second number  :" << number_2 << endl;
    number_1 = number_1 + number_2;
    number_2 = number_1 - number_2;
    number_1 = number_1 - number_2;
    cout << endl;
    cout << "-------After swaping------------  " << endl;
    cout << endl;
    cout << " First number after swaping:" << number_1 << endl;
    cout << " Second number after swaping:" << number_2 << endl;
    cout << "--------------------------------  " << endl;
    return 0;
}