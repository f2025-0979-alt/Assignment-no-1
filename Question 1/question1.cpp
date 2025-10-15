#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float number1, number2;
    cout << "Enter frist number :" << endl;
    cin >> number1;
    cout << "Enter second number :" << endl;
    cin >> number2;

    cout << "-----output before casting------"<<endl;
    cout << "________________________________________" << endl;
    cout << left << setw(20) << "sum      :" << right << setw(20) << setprecision(3) << (number1 + number2) << endl;
    cout << left << setw(20) << "diffrence:" << right << setw(20) << setprecision(3) << (number1 - number2) << endl;
    cout << left << setw(20) << "product  :" << right << setw(20) << setprecision(3) << (number1 * number2) << endl;
    cout << left << setw(20) << "quotient :" << right << setw(20) << setprecision(3) << (number1 / number2) << endl;
    cout << "________________________________________" << endl;

    int frist_number, second_number;
    frist_number = static_cast<int>(frist_number);
    second_number = static_cast<int>(second_number);

    cout << "-----output after casting------"<<endl;
    cout << "________________________________________" << endl;
    cout << left << setw(20) << "sum      :" << right << setw(20) << (frist_number + second_number) << endl;
    cout << left << setw(20) << "diffrence:" << right << setw(20) << (frist_number - second_number) << endl;
    cout << left << setw(20) << "product  :" << right << setw(20) << (frist_number * second_number) << endl;
    cout << left << setw(20) << "quotient :" << right << setw(20) << (frist_number / second_number) << endl;
    cout << "________________________________________" << endl;

    return 0;
}