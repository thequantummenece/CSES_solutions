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
        long long sum = 0;
        vector<long long>s1;
        vector<long long>s2;
        

        
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