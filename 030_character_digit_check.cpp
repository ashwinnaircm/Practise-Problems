//Program to check is a character is a digit 

#include<iostream>
using namespace std;

int main()
{
  char character;
  cout << "Enter the Character : ";
  cin >> character;
  if (character>='0' && character<='9')
  {
    cout << " Character is a Digit " << endl;
  }
  else
  {
    cout << " Character is not a Digit " << endl;
  }
}

