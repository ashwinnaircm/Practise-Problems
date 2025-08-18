//Program to Swap Two Variables

#include<iostream>
using namespace std;

int main()
{
  int num1,num2,temp;                 //Variables num1,num2 to store Values and Temp to Swap the Numbers
  cout << "Enter the First Number : ";
  cin >> num1;
  cout << "Enter the Second Number : ";
  cin >> num2;                             // Takes in Two Numbers 
  cout << "Before Swap : \n";
  cout << "The First Number is : "<< num1 << " and the Second Number is : " << num2 << endl;  // Displaying Numbers before the Swap
  temp=num1;
  num1=num2;
  num2=temp;                                                                  //Swapping the Numbers
  cout << "After Swap : \n";
  cout << "The First Number is : "<< num1 << " and the Second Number is : " << num2 << endl;       //Displaying the numbers after the Swap
  return 0;
}
