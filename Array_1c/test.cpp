#include <bits/stdc++.h>
#define int long long
using namespace std;
#define FOR(i, a, b) for (int i = (a); i<= (b); ++i)
#define FOD(i, a, b) for (int i = (a); i <= (b); ++i)
#define CHECK (i, n) for (int i = 0; i <= (n); ++i)

double long x, y;
main(){
    cin >> x >> y;
    if(x>0 && y>0)  cout << "1";
    if(x>0 && y <0) cout << "4";
    if(x<0 && y > 0) cout << "2";
    if(x<0 && y<0)  cout << "3";
}