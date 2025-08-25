//Program to check if a number id divisible by 5 and 11

#include<iostream>
using namespace std;

int main()
{
  int year;
  cout << "Enter the Year : ";
  cin >> year;
  if ((year%4==0 && year%100!=0) || (year%400==0))          //Checking if the Year is a Leap Year
  {
    cout << year << " is a Leap Year" << endl;
  } 
  else
  {
     cout << year << " is not a Leap Year" << endl;
  }
  return 0;
}

