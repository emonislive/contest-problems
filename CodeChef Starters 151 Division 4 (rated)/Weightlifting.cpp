#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c, int d, int e, int f)
{
    int w1 = max(a, b);
    int w2 = max(c, d);
    int w3 = max(e, f);

    cout << w1 + w2 + w3;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;
    solve(a, b, c, d, e, f);

    return 0;
}
