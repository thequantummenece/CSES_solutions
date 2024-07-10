#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long c = (n*(n+1))/2;
    if(c%2 == 0){
        cout<<"YES"<<endl;
        long long i = 1;
        long long j = n;
        long long sum = 0;
        vector<long long>s1;
        vector<long long>s2;
        int flag = 1;
        for(int i =1;i<=n;i=i+2){
            if(flag == 1){
                s1.push_back(i);
                if(i+1<=n){s2.push_back(i+1);}
            }
            else{
                s2.push_back(i);
                if(i+1<=n){s1.push_back(i+1);}
            }
            flag = -1*flag;
        }
        cout<<s1.size()<<endl;
        for(int i =0;i<s1.size();i++){
            cout<<s1[i]<<" ";
        }
        cout<<endl<<s2.size()<<endl;
        for(int i =0;i<s2.size();i++){
            cout<<s2[i]<<" ";
        }
        return 0;
    }
    cout<<"NO";
    return 0;
}