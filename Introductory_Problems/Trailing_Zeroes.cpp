#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long diver = 5;
    long long ans = 0;
    while(n/diver>=1){
        ans = ans + n/diver;
        diver = diver*5;
    }
    cout<<ans;
    return 0;
}