#include <iostream>
using namespace std;
int main() {
    int c=0; 
    int a; 
    cout <<"enter first number"<< endl;
    cin >>a;
    int b; 
    cout << "enter second number" << endl;
    cin >>b;
    int ans= a^b;
    while (ans!= 0) {
        if (ans& 1) { 
            c++;
        }
        ans= ans>> 1; 
    }
    cout<<c<<endl;
    return 0;
}
