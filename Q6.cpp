// question 4::postion of set bit is->
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter num" << endl;
  cin >> n;
  int pos= 0;
  while (n!=0)
  {
    if (n & 1 != 0)
    {
      cout <<pos<< endl;
      pos++;
      n = n >> 1;
    }
    else
    {
      pos++;
      n =n>> 1;
    }
  }
}




//2nd approach
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n == 0) {
        cout << "Position: -1" << endl;
    } else if ((n & (n - 1)) == 0) { 
        int position = 0;
        while (n) {
            position++;
            n = n >> 1;
        }
        cout << "Position: " << position << endl;
    } else {
        cout << "Position: -1" << endl;
    }

    return 0;
}
