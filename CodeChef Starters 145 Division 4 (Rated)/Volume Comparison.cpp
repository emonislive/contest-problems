#include <iostream>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int vol = a * b * c;
    int vol_cube = d * d * d;
    
    if (vol == vol_cube)
        cout << "Equal" << endl;
    else if (vol > vol_cube)
        cout << "Cuboid" << endl;
    else
        cout << "Cube" << endl;

    return 0;
}
