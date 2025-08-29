//Program to print numbers n to 1

#include<iostream>
using namespace std;

int main()
{
  int number,i;
  cout << "Enter a Number : ";
  cin >> number;
  for(i=number;i>=1;i--)
  {
    cout << i << endl;
  }
  return 0;
}
