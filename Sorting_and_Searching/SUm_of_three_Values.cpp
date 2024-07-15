#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;
    int a = -1;
    int b = -1;
    int c = -1;
    vector<vector<long long>> dp(n, vector<long long>(2));
    for (int i = 0; i < n; i++)
    {
        vector<long long> temp = {0, i};
        cin >> temp[0];
        dp[i] = temp;
    }
    sort(dp.begin(), dp.end(), [](vector<long long> &a, vector<long long> &b)
         { return a[0] < b[0]; });
    for (int k = 0; k < n; k++)
    {
        int i = k+1;
        int j = n - 1;
        while (i < j)
        {
            if (dp[i][0] + dp[j][0] == (x-dp[k][0]))
            {
                a = dp[i][1];
                b = dp[j][1];
                c = dp[k][1];
                break;
            }
            else if (dp[i][0] + dp[j][0] < x-dp[k][0])
            {
                i++;
                continue;
            }
            else
            {
                j--;
                continue;
            }
        }
    }

    if (a != -1 && b != -1 && c!=-1)
    {
        cout << a + 1 << " " << b + 1<<" "<<c+1;
    }
    else
    {
        cout << "IMPOSSIBLE";
    }
    return 0;
}
