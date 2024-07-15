#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<long long> dp;

long long helper(long long a, long long b, int i) {
    if (i == dp.size()) {
        return abs(a - b);
    }
    return min(helper(a + dp[i], b, i + 1), helper(a, b + dp[i], i + 1));
}

int main() {
    int n;
    cin >> n;
    dp.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> dp[i];
    }
    cout << helper(0, 0, 0) << endl;
    return 0;
}
