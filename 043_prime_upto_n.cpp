//Program to print prime numbers upto n

#include<iostream>
using namespace std;

int main()
{
  int number,flg=0;
  cout << "Enter a number : ";
  cin >> number;
  for(int i=2;i<=number;i++)
  {
    flg=0;
    for(int j=2;j<i;j++)
    {
      if(i%j==0)
      {
        flg=flg+1;
        break;
      }
    }
    if (flg==0)
    {
      cout << i << " ";
    }
  }
  return 0;    
}

