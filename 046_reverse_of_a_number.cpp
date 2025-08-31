//Program to get the reverse of a number

#include<iostream>
using namespace std;

int main()
{
  int number,reversed=0,digit,final;
  cout << "Enter a number : ";
  cin >> number;
  while (number!=0)
  {
    digit=number%10;
    reversed=reversed*10+digit;
    number=number/10;
  }
  cout << "The Reversed Number is : " << reversed <<endl;
}
