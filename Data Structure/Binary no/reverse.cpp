#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse;
    while(n>0){
        int lastdigits=n%10;
        reverse=reverse*10+lastdigits;
        n=n/10;
    }
    cout<<reverse;
    cout<<endl;
    return 0;
}