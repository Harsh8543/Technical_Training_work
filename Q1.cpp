#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number";
    cin>>num;
    int cnt=0; 
    int n=num; 
    while(n){
        if((n & 1)!=0){ 
            cnt++;
        }
        n = n >> 1; 
    }
    cout<<cnt << endl;
    return 0;
}
