#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    int ans = 0;
    vector<int> dp(n);
    for (int i =0;i<n;i++){
        cin>>dp[i];
    }
    sort(dp.begin(),dp.end());
    int i =0;int j = n-1;
    while(i<=j){
        if(i==j){ans++;break;}
        if(dp[i]+dp[j]<=k){
            i++;
            j--;
            ans++;
        }
        else{
            j--;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}