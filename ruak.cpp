#include "ruak.h"
#include <iostream>
#include <string>

using namespace std;

Calculator::Calculator()
{
  scores = 0;
}
void Calculator::operatormultiply()
{
  cout << "Next thing we are going to learn is multiplication.\n";
  cout << "You already know How does multiplication works form you maths class\n\n";
  cout << "Now we will learn how multiplication is done in computer\n";
  cout << "The Basic difference is in the sign, in maths you use X as the multiplication sign\n\n";
  cout << "But in coding language we use \"*\" also known as (asterisk). ";
  cout << " Here is an example 5*4 = 20. \n\n";
  cout << "Now try answering: 10*15 = ";
  int answer;
  do
  {
    cin >> answer;
    if(answer == 150)
    {

      cout << "\n\aCongratulations!! You got it right." << endl;
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nTry again: ";
    }
  } while(answer != 150);
  cout << "2. What is the result of 10 * (-20): " << endl;
  cout << "Please enter your answer: ";


  do
  {
     cin >> answer;
    if(answer == -200)
    {

      cout << "\n\aCongratulations!! You got it right." << endl;
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nTry again: ";
    }
  } while(answer != -200);

  cout << "3. Now fill in the gap 12 .... 5 = 60 " << endl;
  cout << "Please enter your answer: ";
  string answer_str;


  do
  {
    cin >> answer_str;
    if(answer_str == "*")
    {

      cout << "\n\aCongratulations!! You got it right." << endl;
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nTry again: ";
    }
  } while(answer_str != "*");

}

void Calculator::operatorminus()
{
  cout << "Minus Operator" << endl;
  cout << "In C++, the minus operator (-) is a binary arithmetic operator ";
  cout << "that performs subtraction between two operands." << endl;

  //Challenge Problems
  cout << "1. What is the result of 10 - 5: " << endl;
  cout << "Please enter your answer: ";
  int answer;

  do
  {
    cin >> answer;
   if(answer == 5)
   {

      cout << "\n\aCongratulations!! You got it right." << endl;
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nTry again: ";
   }
  } while (answer != 5);
  cout << "2. What is the result of 10 - (-20): " << endl;
  cout << "Please enter your answer: ";

  do
  {
    cin >> answer;
   if(answer == 30)
   {

      cout << "\n\aCongratulations!! You got it right." << endl;
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nTry again: ";
   }
  } while (answer != 30);
  cout << "3. What is the result of -12 - 13: " << endl;
  cout << "Please enter your answer: ";


  do
  {
    cin >> answer;
   if(answer == -25)
   {

      cout << "\n\aCongratulations!! You got it right." << endl;
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nTry again: ";
   }
  } while (answer != -25);
  cout << "4. Now fill in the gap 12 .... 5 = 7 " << endl;
  cout << "Please enter your answer: ";
  string answer_str;

  do
  {
    cin >> answer_str;
   if(answer_str == "-")
   {

      cout << "\n\aCongratulations!! You got it right." << endl;
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nTry again: ";
   }
  } while (answer_str != "-");
}


void Calculator::operatordivide()
{
  cout << "Divide Operator" << endl;
  cout << "The divide operator (/) in C++ is a binary arithmetic operator that is used to divide two operands." << endl;
  cout << "For example, 10/5 = 2" << endl;
  cout << "\nThe left-hand operand is the dividend, and the right-hand operand is the divisor.";

  //Challenge Problem
  cout << "\nNow let's try with several problems!\n";
  int answer;

  cout << "1. What is the result of 25 / 5: " << endl;
  cout << "Please enter your answer: ";

  do
  {
    cin >> answer;
    if(answer == 5)
    {
      cout << "\a\nCongratulations!! You got it right." << endl;\
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nPlease try again!";
    }
  } while(answer != 5);

  cout << "\n2. What is the result of 240 / 12: " << endl;
  cout << "\nPlease enter your answer: ";

  do
  {
    cin >> answer;
    if(answer == 20)
    {
      cout << "\a\nCongratulations!! You got it right." << endl;\
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nPlease try again!";
    }
  } while(answer != 20);

  cout << "3. What is the divide operator in C++: " << endl;
  cout << "Please enter your answer: ";

  string answer_str;
  do
  {
    cin >> answer_str;
    if(answer_str == "/")
    {
      cout << "\a\nCongratulations!! You got it right." << endl;\
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nPlease try again:";
    }
  } while(answer_str != "/");
}

void Calculator::operatorplus()
{
  //Show the explanation.
  cout << "\nIn C++, arithmetic operators are used to perform mathematical\n";
  cout << "operations.\n The addition arithmetic operations in C++ is";
  cout << "the '+' symbol, which is used to add two values together.\n";
  cout << "\nIt can be used with several different types of data, such as\n";
  cout << "integers, floating point numbers, and characters.\n\n";

  //Show the example
  cout << "\nLet's take a look at an example:\n";
  cout << "3.14 + 2.71\n";
  cout << "It will return 5.85. It can address floating point numbers.\n\n";
  cout << "\'h\' + \'i\'\n";
  cout << "This will show \"hi\". This is the addition of characters.\n\n";
  cout << "------------------------------------------------------------\n";


  cout << "Review Question\n";
  cout << "Evaluate the value of each expression.\n\n";

  bool correct = false;
  do
  {
    cout << "Question 1:\n";
    cout << "5 + 2\n" << "What is the answer? ";
    int answer1;
    cin >> answer1;
    if (answer1 == 7)
    {
      scores++;
      correct = true;
      cout << "\a\nCorrect! You got it.\n";
    }
    else
    {
      cout << "Your answer is not correct.\n\n";
    }
  } while(!correct);

  correct = false;

  do
  {
    cout << "Question 2:\n";
    cout << "'a' + 'b'\n" << "What is the answer?\n";
    string answer2;
    cin >> answer2;
    if (answer2 == "ab")
    {
      scores++;
      correct = true;
      cout << "\a\nCorrect! You got it.\n";
    }
    else
    {
      cout << "Your answer is not correct.\n";
      cout << "Hint: This is an addition of characters\n\n";
    }
  } while(!correct);

  correct = false;
  do
  {
    cout << "Question 3:\n";
    cout << "3 + 6\n" << "What is the answer?\n";
    int answer3;
    cin >> answer3;
    if (answer3 == 9)
    {
      scores++;
      correct = true;
      cout << "\a\nCorrect! You got it.\n";
    }
    else
    {
      cout << "Your answer is not correct.\n\n";
    }
  } while(!correct);

}

int Calculator::getscore()
{
  return scores;
}

void Calculator::operatorassignment()
{
  //Definition
  cout << "The assignment operator in C++ is used to assign a value to a variable\n";
  cout << "It is represented by the equal sign (=) and is a binary operator. The syntax for using the assignment operator is:" << endl;
  cout << "variable = expression;" << endl;
  cout << "Here, the expression is evaluated and the result is assigned to the variable on the left-hand side of the assignment operator.\n";
  cout << "The expression can be a literal value, a variable, or an expression involving other operators.\n";
  cout << "Here are some examples of using the assignment operator in C++:" << endl;
  cout << "x = 10; //initialize x to 10 using the assignment operator" << endl;

  cout << "Now let's try with several problems!";

  //Challenge Problem
  int answer;
  do
  {
    cout << "Problem 1:" << endl;
    cout << "interest rate = 5;" << endl;
    cout << "What is the value that variable 'interest' rate holds?" << endl;
    cout << "Please enter your answer: ";
    cin >> answer;
    if(answer == 5)
    {
      cout << "\a\nCongratulations!! You got it right." << endl;
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }
    else
    {
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nPlease try again!" << endl;
    }
  } while(answer != 5);

  do
  {
    cout << "Problem 2:" << endl;
    cout << "a = 10;" << endl;
    cout << "b = a + 20;" << endl;
    cout << "What is the value that variable variable b holds?" << endl;
    cout << "Please enter your answer: ";
    cin >> answer;
    if(answer == 30)
    {
      cout << "\a\nCongratulations!! You got it right." << endl;
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }else{
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nPlease try again!" << endl;
    }
  }while(answer != 30);

  string answer_str;
  do
  {
    cout << "Problem 3:" << endl;
    cout << "myName = \"Rahul\"" << endl;
    cout << "What is the value that variable myName holds?" << endl;
    cout << "Please enter your answer: ";
    cin >> answer_str;
    if(answer_str == "Rahul")
    {
      cout << "\nCongratulations!! You got it right." << endl;
      scores++;
      cout << "\nYour scores now is: " << scores << endl;
    }else{
      cout << "\nYour answer is not correct." << endl;
      cout << "\nYour scores now is: " << scores << endl;
      cout << "\nPlease try again!" << endl;
    }
  }while(answer_str != "Rahul");

}
