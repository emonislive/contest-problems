// problem code: OLYMPICS24
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c){
    int tot = a + b + c;
    int res = 15 - tot;
    cout << res << endl;
}
int main()
{ 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    solve(a, b, c);
    return 0;
}
