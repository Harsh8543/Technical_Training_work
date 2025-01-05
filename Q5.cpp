// program to find whether a no is power of two
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the value of n" << endl;
  cin >> n;
  int count = 0;
  while (n != 0)
  {
    if (n & 1 != 0)
    {
      count++;
      n = n >> 1;
    }
    else
    {
      n = n >> 1;
    }
  }
  if (count == 1)
  {
    cout << "number is power of two" << endl;
  }
  else
  {
    cout << "number is not power of two" << endl;
  }
}



//// 2nd approach
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    if (n > 0 && (n & (n - 1)) == 0) {
        cout << "The number is a power of two" << endl;
    } else {
        cout << "The number is not a power of two" << endl;
    }
    return 0;
}
