#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c)
{
    int ans = abs(a - b);  // to convert negative value to positive, ex. |-3-3| = 6
    if (ans == c)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    int a, b, c;
    while(t--){
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    return 0;
}
