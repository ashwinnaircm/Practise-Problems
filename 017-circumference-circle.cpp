//Program to find the circumference of a circle

#include<iostream>
using namespace std;

int main()
{
  float radius,circumference;
  cout << "Enter the Radius of the Circle : ";
  cin >> radius;                                              //Taking in the Radius
  circumference=2*3.14*radius;                                    //Finding the Circumference
  cout << "The Circumference of the Circle is : " << circumference << endl;     //Displaying the Circumference
  return 0;
}
