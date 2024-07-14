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
    vector<int> dp(n);
    long long avg = 0;
    for(int i =0;i<n;i++){
        cin>>dp[i];
        avg = avg + dp[i];
    }
    avg = avg/n;
    long long ans = 0;
    for(int i =0;i<n;i++){
        ans = ans + abs(avg-dp[i]);
    }
    cout<<ans;
}
