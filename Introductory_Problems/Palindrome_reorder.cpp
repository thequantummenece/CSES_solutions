#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string n;
    cin>>n;
    vector<int> dp(26,0);
    for(int i =0;i<n.size();i++){
        dp[int(n[i])-65] = dp[int(n[i])-65] + 1;
    }
    int odd = 0;
    int index = 27;
    for(int i =0;i<26;i++){
        if(dp[i]%2 == 1){odd++;index = i;}
    }
    if(odd>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    string a = "";
    string b = "";
    for(int i=0;i<26;i++){
        a = a+ string(dp[i] / 2, char(i + 65));
        b = string(dp[i] / 2, char(i + 65)) + b;
    }
    if(index == 27){
        cout<<a<<b;
        return 0;
    }
    cout<<a<<char(index+65)<<b;
    return 0;
}