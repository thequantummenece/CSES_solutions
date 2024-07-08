#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long ans = (n * (n + 1)) / 2;
    for (int i = 0; i < n - 1; i++) {
        long long temp;
        cin >> temp;
        ans -= temp;
    }
    cout << ans << endl;
    return 0;
}
