//Program to print product of First 10 Natural Numbers
#include<iostream>
using namespace std;

int main()
{
  int i,pro=1;
  for (i=1;i<11;i++)        //For LOOP to get product of Numbers
  {
    pro=pro*i ;
  }
  cout << "The Product of First 10 Natural Numbers : " << pro << "\n";
  return 0;
}

