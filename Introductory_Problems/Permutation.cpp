#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n==1){cout<<1;return 0;}
    if(n==4){cout<<2<<" "<<4<<" "<<1<<" "<<3;}
    if(n<=3){cout<<"NO SOLUTION";return 0;}
    long long m = n-1;
    for(long long i = n;i>0;i=i-2){
        cout<<i<<" ";
    }
    for(long long i = m;i>0;i=i-2){
        cout<<i<<" ";
    }
    return 0;
}