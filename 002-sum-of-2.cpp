//Program to print the sum of two numbers

#include <iostream>
using namespace std;

int main()
{
  int num1,num2,sum;                                  //Declaring variables for 2 Numbers and their sum
  cout << "Enter the First Number : ";
  cin >> num1;                                        //Prompts and takes in first number
  cout << "Enter the Second Number : ";
  cin >> num2;                                        //Prompts and takes in second number
  sum=num1+num2;                                      //Assigning the sum of two numbers
  cout <<"The sum of Two Numbers are : " << sum <<"\n";   //Displaying the sum
  return 0;                                           //Indicate Successful program execution
 }
