#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int a)
{
    int even = 0, odd = 0;
    if (a % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                if (i % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
    }

    if (even == odd)
        cout << 0 << endl;
    else if (even > odd)
        cout << 1 << endl;
    else
        cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        solve(a);
    }
    return 0;
}
