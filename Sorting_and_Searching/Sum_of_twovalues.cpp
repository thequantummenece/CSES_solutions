#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;


int main()
{
    long long n,x;
    cin>>n>>x;
    int a = -1;
    int b = -1;
    vector<vector<int>> dp(n,vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        vector<int> temp ={0,i};
        cin>>temp[0];
        dp[i] = temp;
    }
    sort(dp.begin(),dp.end(),[](vector<int>& a,vector<int>& b){return a[0]<b[0];});
    int i = 0;
    int j = n-1;
    while(i<j){
        if(dp[i][0]+dp[j][0] == x){
            a = dp[i][1];
            b = dp[j][1];
            break;
        }
        else if(dp[i][0]+dp[j][0] < x){
            i++;
            continue;
        }
        else{
            j--;
            continue;
        }
    }
    if(a!= -1 && b!=-1){
        cout<<a+1<<" "<<b+1;
    }
    else{
        cout<<"IMPOSSIBLE";
    }
    return 0;
}
