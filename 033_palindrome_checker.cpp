//Program to check if a number is a palindrome

#include<iostream>
using namespace std;

int main()
{
  int num,original,reversed=0,digit;
  cout << "Enter a Number : ";
  cin >> num;
  original=num;
  while(num>0)
  {
    digit=num%10;
    reversed = reversed * 10 + digit;
    num=num/10;
  }
  if(original==reversed)
  {
    cout << "The number is a Palindrome " << endl;
  }
  else
  {
    cout << "The number is not a Palindrome " << endl;
  }
}
