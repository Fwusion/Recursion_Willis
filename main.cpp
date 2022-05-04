#include <iostream>
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


  return 0;
}