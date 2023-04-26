#include <iostream>

using namespace std;
#include <string>
int main(){
    string str;
    string str1,str2;
    cin>>str1>>str2;
    str1.append(str2);
    cout<<str1<<endl;
    return 0;
}