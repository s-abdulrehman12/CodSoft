#include <iostream>
#include <string>
using namespace std;
char board[3][3] = {{'1', '2', '3'},
                    {'4', '5', '6'},
                    {'7', '8', '9'}};
int row, column;
string n1 = " ";
string n2 = " ";
int target;
char check;
int i = 0;
char fff;
int draw();
void show()
{
    cout << "\t\t\t ####### ###  #####     #######    #     #####     ####### ####### ####### " << endl;
    cout << "\t\t\t    #     #  #     #       #      # #   #     #       #    #     # #       " << endl;
    cout << "\t\t\t    #     #  #             #     #   #  #             #    #     # #       " << endl;
    cout << "\t\t\t    #     #  #             #    #     # #             #    #     # #####   " << endl;
    cout << "\t\t\t    #     #  #             #    ####### #             #    #     # #       " << endl;
    cout << "\t\t\t    #     #  #     #       #    #     # #     #       #    #     # #       " << endl;
    cout << "\t\t\t    #    ###  #####        #    #     #  #####        #    ####### ####### " << endl;
}
void func1()
{
    cout << board[0][0] << "     |"
         << "     " << board[0][1] << "      |" << board[0][2] << endl;
    cout << "________________________" << endl;
    cout << board[1][0] << "     |"
         << "     " << board[1][1] << "      |" << board[1][2] << endl;
    cout << "_________________________" << endl;
    cout << board[2][0] << "     |"
         << "     " << board[2][1] << "      |" << board[2][2] << endl;
    cout << "_________________________" << endl;
}
void func2()
{
    cout << endl;
    cout << " Enter the name of first player : ";
    getline(cin, n1);
    cout << "Enter the name of second player :";
    getline(cin, n2);
    cout << "The marked option for first player will be 'x' " << endl;
    cout << "The marked option for second player will be '0':" << endl;
}
void func3()
{
    if (target == 1)
    {
        row = 0;
        column = 0;
    }
    if (target == 2 )
    {
        row = 0;
        column = 1;
    }
    if (target == 3)
    {
        row = 0;
        column = 2;
    }
    if (target == 4)
    {
        row = 1;
        column = 0;
    }
    if (target == 5)
    {
        row = 1;
        column = 1;
    }
    if (target == 6)
    {
        row = 1;
        column = 2;
    }
    if (target == 7)
    {
        row = 2;
        column = 0;
    }
    if (target == 8)
    {
        row = 2;
        column = 1;
    }
    if (target == 9)
    {
        row = 2;
        column = 2;
    }
    if (target >= 10 || target < 1)
    {
        cout << "you createed a wrong turn :" << endl;
    }
}
int func4()
{
    while (i != 10)
    {
        cout << n1 << " please enter your target :" << endl;
        cin >> target;
        if ((board[row][column] == 'x' || board[row][column] == '0') && (board[row][column] != 'x' && board[row][column] != '0'))
        {
            cout << "You enetred an invalid Turn :";
            continue;
        }
        func3();
        if (board[row][column] != 'x' && board[row][column] != '0')
        {
            board[row][column] = 'x';
            func1();
        }
        for (int i = 0; i < 3; i++)
        {
            if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) && (board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x'))
            {
                cout << n1 << "wins the match :";
                return 0;
            }
            if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) && (board[i][0] == '0' && board[i][1] == '0' && board[i][2] == '0'))
            {
                cout << n2 << "Wins the match :";
                return 0;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && (board[0][i] == 'x' && board[1][i] == 'x' && board[2][i] == 'x'))
            {
                cout << n1 << "Wins the match :";
                return 0;
            }
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && (board[0][i] == '0' && board[1][i] == '0' && board[2][i] == '0'))
            {
                cout << n2 << "Wins the match :";
                return 0;
            }
        }
        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]) && (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x' || board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x'))
        {
            cout << n1 << "Wins the match :";
            return 0;
        }
        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]) && (board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0' || board[0][2] == '0' && board[1][1] == '0' && board[2][0] == '0'))
        {
            cout << n2 << "Wins the match :";
            return 0;
        }
        cout << n2 << " Enter your target position: ";
        cin >> target;
       /* if ((board[row][column] == 'x' || board[row][column] == '0') && (board[row][column] != 'x' || board[row][column] != '0'))
        {
            cout << "You entered an invalid turn :" << endl;
            goto rex;
        }*/
        func3();
        if (board[row][column] != 'x' && board[row][column] != '0')
        {
            board[row][column] = '0';
            func1();
        }
        for (int i = 0; i < 3; i++)
        {
            if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) && ((board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x')))
            {
                cout << n1 << " wins the match :";
                return 0;
            }

            if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) && ((board[i][0] == '0' && board[i][1] == '0' && board[i][2] == '0')))
            {
                cout << n2 << "Wins the match :";
                return 0;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if ((board[0][i] == board[1][i] && board[1][i] == board[2][i]) && (board[0][i] == 'x' && board[1][i] == 'x' && board[2][i] == 'x'))
            {
                cout << n1 << "Wins the match :";
                return 0;
            }
            if ((board[0][i] == board[1][i] && board[1][i] == board[2][i]) && (board[0][i] == '0' && board[1][i] == '0' && board[2][i] == '0'))
            {
                cout << n2 << "Wins the match :";
                return 0;
            }
        }
        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]) && (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x' || board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x'))
        {
            cout << n1 << "Wins the match :" << endl;
            return 0;
        }
        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]) && (board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0' || board[0][2] == '0' && board[1][1] == '0' && board[2][0] == '0'))
        {
            cout << n2 << "Wins the match :" << endl;
            return 0;
        }
        i++;
    }
    return 0;
}
int draw(){
    cout<<"its the draw :";
    return 0;
}
int main()
{
    show();
    func1();
    func2();
    // func3();
    func4();
    // func5();
    // func6();

    for (int i = 0; i < 3; i++)
    {
        cout << "Are you want to play again (Y/N): ";
        cin >> fff;
        if (fff == 'y' || fff == 'Y')
        {
            func2();
            func4();
        }
        else
        {
            return 0;
        }
    }
    for (int i=0;i<3;i++){
        if (board[i][0] != board[i][1] && board[i][1] != board[i][2]){
            draw();
        }
        else if (board[0][i] != board[1][i] && board[1][i] != board[2][i] ){
            draw();
        }
        else 
        {
            return 0;
        } 
    }
}