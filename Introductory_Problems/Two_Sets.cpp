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
        if(n%2 == 0){
            int i = 1;
            int j = n;
            while(sum != c/2){
                sum = sum+i+j;
                s1.push_back(i);
                s1.push_back(j);
                i++;
                j--;
            }
            while(i<j){
                s2.push_back(i);
                s2.push_back(j);
                i++;
                j--;
            }
        }
        else{
            s1.push_back(1);
            s1.push_back(2);
            s2.push_back(3);
            int i = 4;
            int j = n;
            sum = 0;
            while(sum != (c-6)/2){
                sum = sum+i+j;
                s1.push_back(i);
                s1.push_back(j);
                i++;
                j--;
            }
            while(i<j){
                s2.push_back(i);
                s2.push_back(j);
                i++;
                j--;
            }
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