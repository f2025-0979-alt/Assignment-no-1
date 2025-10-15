#include <iostream>
using namespace std;
int main()
{
    int number1, number2, number3, smallest_number, largest_number;
    // decleration
    cout << "Enter frist number  :" << endl; // input from user
    cin >> number1;
    cout << "Enter second number  :" << endl;
    cin >> number2;
    cout << "Enter third number  :" << endl;
    cin >> number3;
    if (number1 == number2 && number2 == number3) // if three number are equal
    {
        cout << "-----------------------------" << endl;
        cout << "All number are equa"<<endl;
        cout << "-----------------------------" << endl;
    }
    // Largest number
    else
    {
        if (number1 > number2 && number1 > number3) // find largest numbe
        {
            largest_number = number1;
        }
        else if (number2 > number1 && number2 > number3)
        {
            largest_number = number2;
        }
        else if (number3 > number1 && number3 > number2)
        {
            largest_number = number3;
        }
        // smallest number
        if (number1 < number2 && number1 < number3)
        {
            smallest_number = number1;
        }
        else if (number2 < number1 && number2 < number3)
        {
            smallest_number = number2;
        }
        else if (number3 < number1 && number3 < number2)
        {
            smallest_number = number3;
        }
        cout << "-----------------------------" << endl;
        cout << "Largest Number  : " << largest_number << endl;
        cout << "Smallest Number : " << smallest_number << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}