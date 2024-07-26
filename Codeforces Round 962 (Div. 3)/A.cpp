#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, i, a, chick, cow, temp;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> a;
		
		if (a % 2 == 0) 
			chick = a / 2;
		
		if (a % 4 == 0) 
			cow = a / 4;
		
		if (a % 4 != 0){
			temp = a % 4;
			if (temp == 2) {
				cow = a / 4;
				cow++;
			}
		}
		if (chick > cow) 
			cout << cow << endl;
		else 
			cout << chick << endl;
	}

	return 0;
}
