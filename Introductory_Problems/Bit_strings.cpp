#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long mod = 1000000007;
    long long ans = 1;
    for(int i =0;i<n;i++){
        ans = (ans*2)%mod;
    }
    cout<<ans;
    return 0;
}