//Program to calculate the factorial of a number

#include<iostream>
using namespace std;

int main()
{
  int number,factorial=1,i;
  cout << "Enter a Number : ";
  cin >> number;
  for(i=number;i>=1;i--)
  {
    factorial=factorial*i;
  }
  cout << "Factorial of " << number << " is : " << factorial << endl;
  return 0;
}
