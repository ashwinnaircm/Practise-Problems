//Program to check if a number is a Perfect Number

#include<iostream>
using namespace std;

int main()
{
  int num,sum=0,i;
  cout << "Enter the Number : ";
  cin >> num;
  for(i=1;i<num;i++)
  {
    if(num%i==0)
    {
      sum=sum+i;
    }
  }
  if(sum==num)
  {
    cout << "Number is a Perfect Number " << endl;
  }
  else
  {
    cout << "Number is not a perfect Number" << endl;
  }
}

