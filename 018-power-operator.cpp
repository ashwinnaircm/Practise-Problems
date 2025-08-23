//Program to print the power of a number using pow() operator

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  double number,exponent,result;
  cout << "Enter the Base Number : ";
  cin >> number;                                  //Taking in the Base Number
  cout << "Enter the Exponent Number : ";
  cin >> exponent;                                //Taking in the Exponent Number
  result=pow(number,exponent);                    //Calculating the Result
  cout << "The Result is : " << result << endl;   //Displaying the Result
  return 0;
}
