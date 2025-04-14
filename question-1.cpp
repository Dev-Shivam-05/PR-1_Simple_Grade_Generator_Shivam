#include<iostream>
using namespace std;

int main() 
{
    double std_percentage;
    string std_name;
    char grade;

    cout << "---- Welcome To Grade Calculator ----" << endl << endl;

    cout << "Enter Your Name : ";
    cin >> std_name;
    
    cout << "Enter Your Percentage : ";
    cin >> std_percentage;

    cout << endl;
        (std_percentage >= 90)
            ? grade = 'A'
            :(std_percentage >= 75 && std_percentage < 90)
                ? grade = 'B'
                : (std_percentage > 55 && std_percentage < 75)
                    ? grade = 'C'
                    :(std_percentage < 55 && std_percentage >= 35)
                        ? grade = 'D'
                        : grade = 'F';
    
    (std_percentage > 0 && std_percentage < 100)
        ?cout << "Your Grade Is " << grade
        :cout << "Wrong Input";

    
    switch (grade)
    {
    case 'A':
        cout << ".Excellent Work!";
        break;
    case 'B':
        cout << ".Well Done";
        break;
    case 'C':
        cout << ".Good Job";
        break;
    case 'D':
        cout << ".You Passed.But You Could Do Better";
        break;
    case 'F':
        cout << ".Sorry,You Failed";
        break;
    default:
        cout << "Something Went Wrong";
        break;
    }

    if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << " You Are Eligible For The Next Level.";
    }
    else
    {
        cout << " Please Try Again Next Time";
    }

    cout << endl << endl << "---- Thanks For Coming ----";
    return 0;
}