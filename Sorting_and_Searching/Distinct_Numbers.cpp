#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(){
    long long n;
    cin>>n;
    map<int,int> mp;
    for(int i =0;i<n;i++){
        int temp;
        cin>>temp;
        mp[temp]++;
    }
    cout<<mp.size();
    return 0;
}