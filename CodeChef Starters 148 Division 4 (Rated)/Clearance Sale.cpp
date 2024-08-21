#include <bits/stdc++.h>
using namespace std;

void solve(int a)
{
   int b = a/2;
   cout << b+a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1, a;
    while (t--)
    {
        cin >> a;
        solve(a);
    }
    return 0;
}
