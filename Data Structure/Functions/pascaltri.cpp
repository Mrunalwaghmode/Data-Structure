#include <iostream>

using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    for(int i;i<=n;i++){
        for(int j;j<=i;j++){
            cout<<fact(i)/fact(j)*fact(i-j)<<" ";        }
            cout<<endl;
    }
    return 0;
}