#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    // removes all '.' (dots) from the string
    s.erase(remove(s.begin(), s.end(), '.'), s.end());
    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    solve(s);
    return 0;
}
