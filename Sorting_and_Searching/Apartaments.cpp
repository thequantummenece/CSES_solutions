#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> das(n);
    vector<long long> sas(m);
    for(int i =0;i<n;i++){
        cin>>das[i];
    }
    for(int i =0;i<m;i++){
        cin>>sas[i];
    }   
    sort(das.begin(),das.end());
    sort(sas.begin(),sas.end());
    int i =0;
    int j =0;
    int ans = 0;
    while(i<n && j<m){
        if(abs(das[i]-sas[j])<=k){
            ans++;
            i++;
            j++;
            continue;
        }
        else if(das[i]<sas[j]){i++;}
        else{j++;}
    }
    cout<<ans;
    return 0;
}