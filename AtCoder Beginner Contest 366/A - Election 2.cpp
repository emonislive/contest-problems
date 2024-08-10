#include <iostream>
using namespace std;
#define endl '\n'
/*
    checking if adding all the leftover votes will make any of the party win over other party
    ex. total vote 10, team a = 7, team b = 1, vote left = 2
    now adding the leftover votes to check if any party wins or not
    team a = 7+2 = 9, team b = 1+2 = 3.
    so team a is the winner regardless even the voting isn't finished yet.
    so we can say victory is decided -> (Yes)
*/

void solve(int a, int b, int c)
{
    int left = a - (b + c); // votes left
    
    // adding the leftover votes with the original votes
    int tak = b + left;  
    int ao = c + left;
    
    if ((tak > c && ao < b) || (tak < c && ao > b))  
        cout << "Yes";
    else
        cout << "No";
    
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    int a, b, c;
    t = 1;
    while(t--){
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    return 0;
}
