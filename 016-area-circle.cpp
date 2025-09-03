//Program to find the Area of a Circle

#include<iostream>
using namespace std;

int main()
{
  float radius,area;
  cout << "Enter the Radius of the Circle : ";
  cin >> radius;                                              //Taking in the Radius
  area=3.14*radius*radius;                                    //Finding the Area
  cout << "The Area of the Circle is : " << area << endl;     //Displaying the Area
  return 0;
}
