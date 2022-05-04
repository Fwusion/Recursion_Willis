#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

int tower(int num)
{
  if (num > 1)
  {
    return num * tower(num - 1);
  } else
  {
    return 1;
  }
}

int main()
{
  int num, sum;
  system("clear"); //added because the stuff at the top of the console bothers me.
  cout << "Please enter a number: ";
  num = validateInt(num);

  sum = tower(num);
  cout << "The Factoral of " << num << " is: " << sum << endl; 
  
  return 0;
}