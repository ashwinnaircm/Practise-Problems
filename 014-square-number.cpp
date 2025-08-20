//Program to find Square of a Number

#include<iostream>
using namespace std;

int main()
{
  int number,number_square;                     //Variables to take in and store a number and its square
  cout << "Enter a Number : ";
  cin >> number;                                //Takes in a number
  number_square=number*number;                  //Squares the Number
  cout << "Square of " << number << " is " << number_square << endl;        //Displays the Squared Number
  return 0;
}
