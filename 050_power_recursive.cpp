//Program to find the power of a number using recursion

#include <iostream>
using namespace std;


  int power(int base,int exponent)
  {
    if(exponent==0)
    {
      return 1;
    }
    else
    {
      return base*power(base,exponent-1);
    }
  }
  
int main()
{
  int base,exponent;
  cout << "Enter the Base and Exponent : ";
  cin >> base >> exponent;
  int result=power(base,exponent);
  cout << "Result is : " << result << endl;
  return 0;
}
