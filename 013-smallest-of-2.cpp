//Program to find Smallest of Two Numbers

#include<iostream>
using namespace std;

int main()
{
  int number1,number2;
  cout << "Enter the First Number ";
  cin >> number1;                                         //Taking in the First Number
  cout << "Enter the Second Number ";
  cin >> number2;                                         //Taking in the Second Number
  if(number1<number2)
  {
    cout << number1 << " is the Smallest Number "<< endl;  //Checking if Number1 is lesser than Number2. If True, Displays the Result
  }
  else if(number2<number1)
  {
    cout << number2 << " is the Smallest Number " << endl; //Checking if Number2 is lesser than Number1. If True, Displays the Result
  }
  else
  {
    cout << "Both the Numbers are Equal" << endl;   //If the number is not greater or smaller, then it displays that the numbers are equal
  }
  return 0;
}
