#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number";
    cin>>n;
    int c=0;
    for (int i=1;i<=n;i++) {
        int num=i; 
        while(num) {
            if((num & 1)!=0){
                c++;
            }
            num=num>>1;
        }
    }
    cout <<c<< endl;
    return 0;
}
