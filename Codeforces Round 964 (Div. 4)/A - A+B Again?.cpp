#include <bits/stdc++.h>      // It is basically a header file that includes every standard library
using namespace std;
#define endl '\n'
#define ll long long

void solve(int n){
    int num1 = n % 10;        // gets the last num, ex. num = 21,     21 % 10 = 1 
    int num2 = n / 10;        // gets the 2nd last num                21 / 10 = 2
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
