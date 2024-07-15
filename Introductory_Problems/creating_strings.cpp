#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main() {
    string n;
    cin >> n;
    set<string> s1;

    sort(n.begin(), n.end());

    do {
        s1.insert(n);
    } while (next_permutation(n.begin(), n.end()));

    cout << s1.size() << endl;

    for (const auto& itr : s1) {
        cout << itr << endl;
    }

    return 0;
}
