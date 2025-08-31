//Program to print Fibonacci Numbers upto n

#include<iostream>
using namespace std;

int main()
{
  int number,a=0,b=1,next;
  cout << "Enter a Number : ";
  cin >> number;
  cout << "Fibonacci Numbers upto " << number << " is : ";
  while(a<=number)
  {
    cout << a << endl;
    next=a+b;
    a=b;
    b=next;
  }
  return 0;
}
