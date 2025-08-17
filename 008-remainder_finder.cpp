//Program to find the remainder when a number is divided by other

#include<iostream>
using namespace std;

int main()
{
  int num1,num2,remainder;
  cout << "Enter the First Number : ";
  cin >> num1;                                                //Takes in First Number
  cout << "Enter the Second Number : ";
  cin >> num2;                                               //Takes in Second Number
  if (num1 == 0 || num2 == 0)
  {
    cout << "Number cannot be Zero" << endl;
  }
  else
  {
    remainder=num1%num2;                                        //Takes the Remainder
    cout << "The remainder of " << num1 << " / " << num2 << " is " << remainder << endl; //Displays the Remainder
  }
  return 0;
}
