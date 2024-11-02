#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int n)
{
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int diff = abs(v[i] - v[i + 1]);
        if (diff != 5 && diff != 7)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}
