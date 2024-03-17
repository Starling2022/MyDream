#include <bits/stdc++.h>
using namespace std;
int32_t main ()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int gio, phut, giay;
    int ss;
    cin>>ss;
    gio = ss % 86400 / 3600;
    phut = ss % 86400 % 3600 / 60;
    giay = ss % 86400 % 3600 % 60;
    if(gio<10)  cout << "0";
    cout << gio << ":" ;
    if(phut<10) cout << "0";
    cout << phut << ":"; 
    if(giay<10) cout << "0";
    cout << giay;
}