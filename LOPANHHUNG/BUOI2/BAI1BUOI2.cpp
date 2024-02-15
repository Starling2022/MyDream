#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a);i<=(b);++i)
using namespace std;
int l,r,x,k,t;
void search(int t)
{
    cin>>l>>r;
    for (int k=39;k>=1;k--)
    {
        x=2;
        while (pow(x,k)<=r)
            x++;
        if (pow(x-1,k)>=l&&x>2)
        {
            cout<<"Case #"<<t<<": "<<k<<endl;
            return;
        }
    }
}
main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    FOR(i, 1, t)
        search(i);
}