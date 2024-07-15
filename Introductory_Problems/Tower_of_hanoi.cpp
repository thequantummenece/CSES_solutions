#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

void TOH(int n, int a,int b,int c){
    if(n<=1){cout<<a<<" "<<c<<endl;return;}
    TOH(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    TOH(n-1,b,a,c);
}

int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    TOH(n,1,2,3);
    return 0;
}