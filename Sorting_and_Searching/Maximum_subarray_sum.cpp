#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;


int main()
{
    long long n;
    cin>>n;
    vector<long long> dp(n);
    for(int i =0;i<n;i++){
        cin>>dp[i];
    }
    long long ans = dp[0];
    long long maxt = dp[0];
    for (int i = 1; i < n; i++){
        if(dp[i] + maxt > dp[i]){maxt = dp[i] + maxt;}
        else{maxt = dp[i];}
        if(ans<maxt){ans = maxt;}
    }
    cout<<ans;
    return 0;
}
