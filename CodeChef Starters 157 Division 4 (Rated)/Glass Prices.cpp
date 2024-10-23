#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() 
{
    optimize();
	  ll a, b;
	  cin >> a >> b;
    ll mul = a * 2;
	  
    if (mul >= b)
	      cout << "METAL" << endl;
	  else
	      cout << "PLASTIC" << endl;
  
      return 0;
}
