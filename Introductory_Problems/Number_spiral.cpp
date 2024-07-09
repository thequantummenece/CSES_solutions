#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        long long x,y;
        cin>>y>>x;
        long long n;
        if(x==y){
            cout<<(x*x)-(x-1)<<endl;
            continue;
        }
        long long temp;
        if(x>y){
            n=x;
            if(n%2==0){
                temp = (n*n)-(n-1);
                temp = temp - (n-y);
            }
            else{
                temp = (n*n)-(n-1);
                temp = temp + (n-y);
            }
        }
        else{
            n=y;
            if(n%2==0){
                temp = (n*n)-(n-1);
                temp = temp + (n-x);
            }
            else{
                temp = (n*n)-(n-1);
                temp = temp - (n-x);
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}