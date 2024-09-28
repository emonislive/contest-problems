#include <iostream>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve() {
    string s;
    int c = 0;
    for (int i = 1; i <= 12; i++) {
        cin >> s;
        if (i == s.length())
            c++;
    }
    cout << c << endl;
}

int main() {
    op();
    solve();
    return 0;
}
