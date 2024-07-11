#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<string> helper(vector<string>& ans1 ){
    vector<string> ans2 = ans1;
    reverse(ans2.begin(),ans2.end());
    for(int i =0;i<ans1.size();i++){
        ans1[i] = "0"+ans1[i];
        ans2[i] = "1"+ans2[i];
    }
    vector<string> ans(ans1.size()+ans2.size());
    merge(ans1.begin(), ans1.end(), ans2.begin(), ans2.end(), ans.begin());
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<string> ans = {"0","1"};
    while(n>1){
        ans = helper(ans);
        n--;
    }
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
