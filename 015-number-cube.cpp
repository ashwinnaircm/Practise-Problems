//Program to print the Cube of a number.

#include<iostream>
using namespace std;

int main()
{
  int number,cube;
  cout << "Enter a Number : ";
  cin >> number;                                        //Taking in Number
  cube=number*number*number;                            //Finding out the cube of the number
  cout << "The Cube of " << number << " is " << cube << endl;         //Displaying the Cube
  return 0;
}
  
