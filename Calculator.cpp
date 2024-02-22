#include <iostream>
#include <cmath>
using namespace std;
float sum(float a, float b); // function prototype
float sub(float a, float b); // function prototype
float mul(float a, float b); // function prototype
float div(float a, float b); // function prototype for division
int main()
{
    do
    {
    start:
        float n1, n2;
        char operation;
        char op;
        cout << "Enter the first Number :";
        cin >> n1;
        cout << "Enter the seconf number :";
        cin >> n2;
        opr:
        cout << "enter the operation you want to perform (+,-,*,/) :";
        cin >> operation;
        if (operation == '+')
        {
            sum(n1, n2); // function call
        }
        else if (operation == '-')
        {
            sub(n1, n2); // function call
        }
        else if (operation == '*')
        {
            mul(n1, n2); // function call
        }
        else if (operation == '/')
        {
            div(n1, n2); // function call
        }
        else {
            cout<<"You enterd the wrong operatioon :"<<endl;
            goto opr;
        }
        cout << "Are you want to perform another calculation (Y/N):";
        cin >> op;
        if (op == 'Y' || op == 'y')
        {
            goto start;
        }
        else if (op == 'N' || op == 'n')
        {
            break;
            return 0;
        }
    } while (true);
    return 0;
}
float sum(float a, float b)
{ // function definition of sum
    float add;
    add = a + b;
    cout << add<<endl;
}
float sub(float a, float b)
{
    float minus;
    minus = a - b;
    cout << minus<<endl;
}
float mul(float a, float b)
{
    float pro;
    pro = a * b;
    cout << pro<<endl;
}
float div(float a, float b)
{
    float rem;
    if (b == 0)
    {
        cout << "Invalid Error message :"<<endl;
    }
    else
    {
        rem = a / b;
        cout << rem<<endl;
    }
}