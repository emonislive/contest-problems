#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int a, int b)
{
    if (b >= a)
        cout << 0 << endl;
    else
        cout << a - b << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
  
    int a, b;
  
    cin >> a >> b;
    solve(a, b);
  
    return 0;
}
