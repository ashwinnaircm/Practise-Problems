//Program to check if a number is Positive, Negative or Zero

#include<iostream>
using namespace std;

int main()
{
  int number;
  cout <<"Enter a Number : ";                 
  cin >> number;                          //Takes in the number
  if(number>0)
    {
      cout << "Number is Positive" << endl;       //Checks if the number is Greater than 0
    }
  else if(number<0)
    {
      cout << "Number is Negative" << endl;     //Checks if the number is less than 0
    }
  else
    {
      cout << "Number is Zero" << endl;         //If the number is not greater or less than zero, then Prints that the number is Zero
    }
  return 0;   
}
