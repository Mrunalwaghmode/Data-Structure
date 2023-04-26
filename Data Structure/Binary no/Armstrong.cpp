#include <iostream>

using namespace std;
#include <math.h>
int main(){
    int n;
    int originaln=n;
    cin>>n;
    int sum=0;
    while (n>0){
        int lastdigit= n%10;
        sum+= pow(lastdigit,3);
        n=n/10;

    }
    if(sum=originaln){
        cout<<"armstrong no";
    }
    else{
        cout<<"not";
    }
    return 0;
    
}