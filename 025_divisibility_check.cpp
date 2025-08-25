//Program to check if a number id divisible by 5 and 11

#include<iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter the Number : ";
  cin >> number;
  if (number%5==0 && number%11==0)          //Checking if the number is divisible by both 5 and 11
  {
    cout << "Number is Divisible by both 5 and 11" << endl;
  } 
  else
  {
    cout << "Number is NOT Divisible by both 5 and 11" << endl;
  }
  return 0;
}

