//Program to print the multiplication table of a number

#include<iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter a Number : ";
  cin >> number;
  for(int i=1;i<=10;i++)
  {
    cout << i << " * " << number << " = " << i*number << endl;
  }
  return 0;
}
