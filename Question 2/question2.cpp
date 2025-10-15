#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float subject_1, subject_2, subject_3, subject_4, subject_5, totalMarks, obtainedMarks, percentage;
    string grade;
    string status;
    cout << "Enter Frist Subject marks" << endl;
    cin >> subject_1;
    cout << "Enter Second Subject  marks" << endl;
    cin >> subject_2;
    cout << "Enter Third Subject  marks" << endl;
    cin >> subject_3;
    cout << "Enter Forth Subject  marks" << endl;
    cin >> subject_4;
    cout << "Enter Fifth Subject  marks" << endl;
    cin >> subject_5;
    cout << "Enter Total marks" << endl;
    cin >> totalMarks;
    cout << endl;
    obtainedMarks = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;
    percentage = (obtainedMarks / totalMarks) * 100;
    percentage >= 50 ? status = "Pass" : status = "Fail";
    if (obtainedMarks > totalMarks)
    {
        cout << "---------------------------------------" << endl;
        cout << "Error! Obtained Marks are more then Total marks" << endl;
        cout << "---------------------------------------" << endl;
    }
    else
    {
        if (percentage >= 90 && percentage <= 100)
        {
            grade = "A+";
        }
        else if (percentage >= 80)
        {
            grade = "A";
        }
        else if (percentage >= 70)
        {
            grade = "B";
        }
        else if (percentage >= 60)
        {
            grade = "D";
        }
        else if (percentage >= 50)
        {
            grade = "E";
        }
        else
        {
            grade = "F";
        }
        cout << "----------------Result Card----------------" << endl;
        cout << left << setw(20) << "subject 1 :" << right << setw(20) << subject_1 << endl;
        cout << left << setw(20) << "subject 2 :" << right << setw(20) << subject_2 << endl;
        cout << left << setw(20) << "subject 3 :" << right << setw(20) << subject_3 << endl;
        cout << left << setw(20) << "subject 4 :" << right << setw(20) << subject_4 << endl;
        cout << left << setw(20) << "subject 5 :" << right << setw(20) << subject_5 << endl;
        cout << left << setw(20) << "obtained marks:" << right << setw(20) << obtainedMarks << endl;
        cout << left << setw(20) << "total marks:" << right << setw(20) << totalMarks << endl;
        cout << "------------------------------------------" << endl;
        cout << left << setw(11) << "Obtained Grade :" << grade << right << setw(21) << "Status:" << status << endl;
        cout << "------------------------------------------" << endl;
    }

    return 0;
}