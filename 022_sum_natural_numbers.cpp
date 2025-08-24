//Program to print sum of First 10 Natural Numbers
#include<iostream>
using namespace std;

int main()
{
  int i,sum=0;
  for (i=1;i<11;i++)        //For LOOP to print sum of Numbers
  {
    sum=sum+i ;
  }
  cout << "The sum of First 10 Natural Numbers : " << sum << "\n";
  return 0;
}

