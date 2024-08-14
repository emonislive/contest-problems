#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c, int d)
{
  if (c > d)
    cout << a << endl;
  else
    cout << b << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1, a, b, c, d;
  while(t--){
    cin >> a >> b >> c >> d;
    solve(a, b, c, d);
  }

  return 0;
}
