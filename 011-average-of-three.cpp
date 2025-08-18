//Program to find the average of three numbers

#include<iostream>
using namespace std;

int main()
{
  int number1,number2,number3,number_average;
  cout << "Enter the First Number : ";
  cin >> number1;                                   //Taking First Number
  cout << "Enter the Second Number : ";
  cin >> number2;                                   //Taking Second Number
  cout << "Enter the Third Number : ";
  cin >> number3;                                   //Taking Third Number
  number_average=(number1+number2+number3)/3;     //Finding the Average
  cout << "The Average of " << number1 << " " << number2 << " " << number3 << " is : " << number_average << endl;    //Finding the Average of Three Numbers
  return 0;
}
