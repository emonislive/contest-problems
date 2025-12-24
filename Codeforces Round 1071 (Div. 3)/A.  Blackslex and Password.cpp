#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int a, b;
    cin >> a >> b;
    cout << a * b + 1 << endl;
}

int main() {
    fastIO();
    ll tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
