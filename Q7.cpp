// question 7:Power set--->
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int arr[3] = {1, 2, 3};
  int n = 3;
  int data = 0;

  int element = pow(2, n);
  for (int i = 0; i < element; i++)
  {
    data = i;
    int postion = 0;
    while (data != 0)
    {
      if ((data & 1) == 1)
      {
        cout << arr[postion];
      }
      postion++;
      data = data >> 1;
    }
    cout << endl
         << endl;
  }
}