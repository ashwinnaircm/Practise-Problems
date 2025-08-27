//Program to check if a character is a Alphabet 

#include<iostream>
using namespace std;

int main()
{
  char character;
  cout << "Enter the Character : ";
  cin >> character;
  if (character>='A' && character<='Z')
  {
    cout << " Character is a Alphabet " << endl;
  }
  else if (character>='a' && character<='z')
  {
    cout << " Character is a Alphabet " << endl;
  }
  else
  {
    cout << " Character is not a Alphabet " << endl;
  }
}

