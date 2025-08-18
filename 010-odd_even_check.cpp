//Program to check if a number is odd or even

#include<iostream>
using namespace std;

int main()
{
  int number,remainder;               //Variables to Take in Number and Check if Odd or Even
  cout << "Enter a Number : ";
  cin >> number;                      //Prompted and taken number to check if odd or even
  remainder=number%2;
  if(remainder==0)
  {
    cout << number << " is an Even Number !"<< endl;    //Even Number divided by Two gives Zero as Remainder, So it Displays Even Number
  }
  else 
  {
    cout << number << " is an Odd Number !"<< endl;     //Even Number divided by Two gives Non-Zero as Remainder, So it Displays Odd Number
  }
  return 0;  
}
