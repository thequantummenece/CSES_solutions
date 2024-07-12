#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

vector<long long> ticks;
vector<bool> purch;

int main()
{
    long long n, m;
    cin >> n >> m;
    ticks.resize(n);
    purch.resize(n, false);
    for (int i = 0; i < n; i++)
    {
        cin >> ticks[i];
    }
    sort(ticks.begin(), ticks.end());
    for (int i = 0; i < m; i++)
    {
        
    }
    return 0;
}
