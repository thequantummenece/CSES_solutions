#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string dp;
    cin>>dp;
    int max_till = 1;
    int abs_max = 1;
    for(int i =0;i<dp.size()-1;i++){
        if(dp[i+1] == dp[i]){
            max_till++;
            if(max_till>abs_max){abs_max=max_till;}
        }
        else{
            max_till = 1;
        }
    }
    cout<<abs_max;
    return 0;
}