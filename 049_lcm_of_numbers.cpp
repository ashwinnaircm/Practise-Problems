//Program to find the LCM of two numbers

#include<iostream>
using namespace std;

int main()
{
  int num1,num2,a,b;
  cout << "Enter the Numbers : ";
  cin >> num1 >> num2;
  a=num1;
  b=num2;
  int lcm = (a>b) ? a:b;
  while (true)
  {
    if(lcm%a==0 && lcm%b==0)
    {
      cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << endl;
      break;
    }
    lcm++;
  }
  return 0;
}
