//Program to convert Celcius to Farenheit

#include<iostream>
using namespace std;

int main()
{
  float celcius,farenheit;
  cout << "Enter the Temperature in Celcius : ";
  cin >> celcius;                                       //Prompts and Takes in value for Celcius
  farenheit=((celcius*9)/5)+32;                         //Converts C to F
  cout << "The Temperature in Farenheit is : " << farenheit; //Displays the Result
  return 0;
  
}

