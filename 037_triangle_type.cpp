//Program to check type of a triangle

#include<iostream>
using namespace std;

int main()
{
  int length1,length2,length3;
  cout << "Enter Length 1 : ";
  cin >> length1;
  cout << "Enter Length 2 : ";
  cin >> length2;
  cout << "Enter Length 3 : ";
  cin >> length3;
  if (length1==length2 && length2==length3)
   {
      cout << "It is an Equilateral Triangle" << endl;
  }
  else if (length1==length2 || length2==length3 || length1==length3)
  {
    cout << "It is a Isoceles Triangle" << endl;
  }
  else
  {
    cout << "it is a Scalene Triangle" << endl;
  }
}
