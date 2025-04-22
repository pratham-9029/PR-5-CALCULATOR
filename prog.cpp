//start
#include <iostream>
using namespace std;

//Define Function
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

float divs(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Error: You enter 0 " <<endl;
    }
}

int mod(int a, int b)
{
    return a % b;
}

//Main Function Start
int main()
{
    int choice, f_num, s_num;

    do
    {
        //Make Your Choice
        cout << "Enter 1 for +" << endl<< "Enter 2 for -" << endl<< "Enter 3 for *" << endl<< "Enter 4 for /" << endl<< "Enter 5 for %" << endl<< "Enter 0 for EXIT" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        if(choice > 0 && choice < 6)
        {
            cout << "Enter First Number: ";
            cin >> f_num;
            cout << "Enter Second Number : ";
            cin >> s_num;
        }
        cout << endl;

        //condition works according to choice
        switch (choice)
        {
        case 0:
            cout << "Code EXITED !" << endl;
            break;
        case 1:
            cout << "Addition of " << f_num << " and " << s_num << " is " << add(f_num, s_num) << endl;
            break;

        case 2:
            cout << "Subtraction of " << f_num << " and " << s_num << " is " << sub(f_num, s_num) << endl;
            break;
        case 3:
            cout << "Multiplication of " << f_num << " and " << s_num << " is " << multi(f_num, s_num) << endl;
            break;
        case 4:
            cout << "Division of " << f_num << " and " << s_num << " is " << divs(f_num, s_num) << endl;
            break;
        case 5:
            cout << "Modulo of " << f_num << " and " << s_num << " is " << mod(f_num, s_num) << endl;
            break;
        default:
            cout << "Wrong choice!!";
            break;
        }
        cout << endl;
    } while (choice != 0);
    cout<<endl;
}
//main function end
//end
