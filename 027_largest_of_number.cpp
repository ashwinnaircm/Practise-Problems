//Program to find the Largest of Three Numbers

#include<iostream>
using namespace std;

int main()
{
  int num1,num2,num3;
  cout << "Enter First Number : ";
  cin >> num1;
  cout << "Enter Second Number : ";
  cin >> num2;
  cout << "Enter Third Number : ";
  cin >> num3;
  if ( num1>num2 && num1>num3)
  {
    cout << num1 << " is the Largest of the Three Numbers that you entered " << endl;
  }
  else if ( num2>num1 && num2>num3)
  {
    cout << num2 << " is the Largest of the Three Numbers that you entered " << endl;
  }
  else if ( num3>num1 && num3>num2)
  {
    cout << num3 << " is the Largest of the Three Numbers that you entered " << endl;
  }
  else
  {
    cout << "Either of the Numbers are similar" << endl;
  }
  return 0;
}
