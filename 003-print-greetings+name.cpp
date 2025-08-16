//program to output greetings with name

#include<iostream>
using namespace std;

int main()
{
  string name;                        //Declaring a variable to store name
  cout << "Enter Your Name : ";       //Prompt user to enter a name
  cin >> name;                        //Read name from user and save to variable
  cout << "Namah Shivaya, " << name;  // Print the greeting + the name 
  return 0;  
}
