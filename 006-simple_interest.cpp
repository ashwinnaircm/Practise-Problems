//Program to Calculate Simple interest

#include<iostream>
using namespace std;

int main()
{
  float principal,time_period,interest_rate,simple_interest;             //Variables for Principal, Time, Rate of Interest and Simple I
  cout << "Enter the Principal Amount : ";
  cin >> principal;                                                      //Takes in Principal Amount
  cout << "Enter the Time Period : ";
  cin >> time_period;                                                    //Takes in Time Period
  cout << "Enter the Rate of Interest : ";
  cin >> interest_rate;                                                  //Takes in Rate of Interest
  simple_interest=(principal*time_period*interest_rate)/100;              //Calculates Simple Interest
  cout << "The Simple Interest is : " << simple_interest << endl;         //Displays Simple Interest
  return 0;  
}

