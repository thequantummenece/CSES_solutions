#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        if(a<b/2 || b<a/2){
            cout<<"NO"<<endl;
            continue;
        }
        if(a==b && a%3!=0){
            cout<<"NO"<<endl;
            continue;
        }
        if((a+b)%3!=0){
            cout<<"NO"<<endl;
            continue; 
        }
        cout<<"YES"<<endl;
    }
    return 0;
}