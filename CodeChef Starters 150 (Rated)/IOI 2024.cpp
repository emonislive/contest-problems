#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int a)
{
    if (a >= 1 && a <= 8)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1, a;
    while (t--)
    {
        cin >> a;
        solve(a);
    }
    return 0;
}
