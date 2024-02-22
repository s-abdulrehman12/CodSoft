#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
string task[10];
int task_count;
int local;
char ta;
void add();
void view(string task[],int task_count);
void del();
int main()
{
     while (true)
     {
          int option = -1;
          cout << "-----------To Do List-------------------" << endl;
          cout << "1) Add a new task " << endl;
          cout << "2) View the tasks " << endl;
          cout << "3) Delete the tasks " << endl;
          cout << "0) Terminate all the programs :" << endl;
          cout << "Enter the Option you want to perform :";
          cin >> option;
          if (option == 0)
          {
               break;
          }
          else if (option == 1)
          {
               add(); // calling the function
          }
          else if (option == 2)
          {
               view(task,task_count); // calling the function
          }
          else if (option == 3)
          {
               del(); // calling the function
          }
     }
}
void add()
{
     cout << "----------------------Add your tasks----------------:" << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << "You want to add a task :";
          cin >> ta;
          if (ta == 'Y' || ta == 'y')
          {
               cout << "Enter your " << i + 1 << " task: ";
               cin.ignore();
               getline(cin >> ws, task[task_count]); // Use getline instead of cin
               task_count++;
               cout << endl;
          }
          else if (ta == 'N' || ta == 'n')
          {
               break;
          }
     }
}

void view(string task[],int task_count){
     cout<<"tasks to do :"<<endl;
     cout<<"_____________________________________________"<<endl;
     for(int i=0;i<task_count;i++){
          cout<<"task"<<i<<":"<<task[i]<<endl;
     }
     cout<<"____________________________________________"<<endl;
}
void del()
{
     for (int y = 0; y < 10; y++)
     {
          int del_task = 0;
          cout << "entter a tas to delete :";
          cin >> del_task;
          if (del_task < 0 || del_task > 9)
          {
               cout << "you entered a invalid task ";
          }
          for (int i = del_task; i < task_count; i++)
          {
               task[i] = task[i + 1];
          }
          task_count = task_count - 1;
          break;
     }
}