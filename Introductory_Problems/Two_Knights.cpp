#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++){
        long long i2c2 = (i*i*(i-1)*(i+1))/2;
        long long ic4 = 4*(i-1)*(i-2);
        cout<<i2c2-ic4<<endl;
    }
    return 0;
}