//Determine the Grade of a student based on their Mark

#include<iostream>
using namespace std;

int main()
{
  int mark1,mark2,mark3,total,percentage;
  cout << "Enter the Mark of the First Subject out of 100 : ";
  cin >> mark1;
  cout << "Enter the Mark of the Second Subject out of 100 : ";
  cin >> mark2;
  cout << "Enter the Mark of the Third Subject out of 100 : ";
  cin >> mark3;
  total=mark1+mark2+mark3;
  percentage=(mark1+mark2+mark3)/300;
  if ( percentage>=95)
  {
    cout << "Great Job !, Your Grade is O " << endl;
  }
  else if ( percentage>=90)
  {
    cout << "Good Job !, Your Grade is A+ " << endl;
  }
  else if ( percentage>=85)
  {
    cout << "Great !, Your Grade is A " << endl;
  }
  else if ( percentage>=80)
  {
    cout << "Good !, Your Grade is B+ " << endl;
  }
  else if ( percentage>=75)
  {
    cout << "Good, Your Grade is C+ " << endl;
  }
  else if ( percentage>=70)
  {
    cout << " Your Grade is C " << endl;
  }
  else if ( percentage>=60)
  {
    cout << " Your Grade is P " << endl;
  }
  else
  {
    cout << "Your Grade is F";
  }
}
