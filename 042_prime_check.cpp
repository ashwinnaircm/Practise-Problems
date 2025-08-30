//Program to check if a number is prime

#include<iostream>
using namespace std;

int main()
{
  int number,flg=0;
  cout << "Enter a number : ";
  cin >> number;
  for(int i=2;i<number/2;i++)
  {
    if(number%i==0)
    {
      flg+=1;
    }
  }
  if (flg==0)
  {
    cout << "The number is a Prime Number " << endl;
  }
  else
  {
    cout << "The number is not a Prime Number " << endl;
  }
  return 0;
}
