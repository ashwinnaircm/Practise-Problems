//Program to find the GCD of two numbers

#include<iostream>
using namespace std;

int main()
{
  int num1,num2;
  cout << "Enter Two Numbers : ";
  cin >> num1 >> num2;
  int a = num1;
  int b = num2;
  while(b!=0)
  {
    int temp = b;
    b=a%temp;
    a=temp;
  }
  cout << "GCD of " << num1 << " and " << num2 << " is " << a <<endl;
  return 0;
}
