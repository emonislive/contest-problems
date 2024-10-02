#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
    vector<int> v;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        v.push_back(in);
    }
    int ans = 0, c = 0;
    for (int i = 0; i < n; i++) {
        ans += v[i];
        if (ans <= k)
            c++;
        else
            break;
    }
    cout << c << endl;
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
