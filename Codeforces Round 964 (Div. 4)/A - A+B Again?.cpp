#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(int n){
    int num1 = n % 10;
    int num2 = n / 10;
    int total = num1 + num2;
    cout << total << endl;
}

int main (){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
