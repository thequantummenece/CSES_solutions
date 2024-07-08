#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans = 0;
    long long max_till;
    cin>>max_till;
    for (int i =0;i<n-1;i++){
        int temp;
        cin>>temp;
        if(temp<=max_till){ans = ans + (max_till-temp);}
        else{max_till = temp;}
    } 
    
    cout<<ans;    
    return 0;
}