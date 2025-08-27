//Electricity Bill Calculation using Slab Basis

#include<iostream>
using namespace std;

int main()
{
  int units;
  double bill;
  cout << "Enter the Number of Units used : ";
  cin >> units;
  if(units<=100)                      //Starts calculating the bill amount
  {
    bill=units*2;
  }
  else if(units<=200)
  {
    bill=200+(units-100)*3;
  }
  else if(units<=300)
  {
    bill=200+300+(units-200)*4;
  }
  else
  {
    bill=200+300+400+(units-300)*5;
  }
  cout << "The Bill amount is : " << bill << endl;
  return 0;
}

