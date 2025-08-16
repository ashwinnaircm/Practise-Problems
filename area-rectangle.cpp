//Program to print the Area of a Rectangle

#include<iostream>
using namespace std;

int main()
{
  int length,breadth,area;                                      //Variables for Length, Breadth and Area
  cout <<"Enter the Length and Breadth of the rectangle : ";    
  cin >> length >> breadth;                                     //Prompts and Takes in values
  area=length*breadth;                                          //Calculates Area
  cout << "Area of Rectangle : " << area <<"\n";                //Displays Area
  return 0;
  
}
