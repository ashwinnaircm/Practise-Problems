//Program to check if the character is a vowel or a consonant

#include<iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter the Value : ";
  cin >> ch;
  ch=tolower(ch);                     //Converting to Lower Class for easy OR Condition
  if(!isalpha(ch))
  {
    cout << "Character is not an Alphabet" << endl ;     //Checks if the value is not an alphabet
  }
  else if (ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
  {
    cout << "Character is a Vowel" << endl ; 
  }
  else 
  {
      cout << "Character is a Consonant"; 
  }
}

