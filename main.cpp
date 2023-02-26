#include "ruak.h"
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  cout << "*****************************************************\n";
  cout << "*    Hello To the World of Coding with Tru-Ruak     *\n";
  cout << "*****************************************************\n";
  string continue_char;
do
{
  cout << "\nWhat do you want to learn Today:\n";
  cout << " 1. Basic Mathematics in Computer.\n";
  cout << "Enter your option: ";
  int choice;
  cin >> choice;
  Calculator obj;

  if (obj.getscore() == 0 && choice == 1)
  {
    cout << "************************************************************\n";
    cout << "*Now lets learn about basic Mathematical Calculating in C+ *\n";
    cout << "************************************************************\n";

    obj.operatorplus();
    cout << endl;
    cout << "******************************\n";
    cout << "* Now Lets move to Next Step *\n";
    cout << "******************************\n";
    cout << endl;
    obj.operatorminus();
    cout << endl;
    cout << "************************************\n";
    cout << "* Good Now Lets move to Next Step  *\n";
    cout << "************************************\n";
    cout << endl;
    obj.operatormultiply();
    cout << endl;
    cout << "*****************************************\n";
    cout << "* Excellent! Now Lets move to Next Step *\n";
    cout << "*****************************************\n";
    cout << endl;
    obj.operatordivide();
    cout << endl;
    cout << "*******************************************************\n";
    cout << "* You are doing Great Work Now Lets move to Next Step *\n";
    cout << "*******************************************************\n";
    cout << endl;
    obj.operatorassignment();
    cout << endl;
    cout << "Congratulations you have done great work.\n";
    cout << "Your Total Score is: " << obj.getscore() << endl;
    cout << "\nDo you want to learn more (Yes/No) Press Y for Yes\n";
    cout << "Press N for No\n";
    cout << "Your Choice: ";
    cin >> continue_char;
  }

} while (continue_char == "Y" || continue_char == "y");


return 0;
}
