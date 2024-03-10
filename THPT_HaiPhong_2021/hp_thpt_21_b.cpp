#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = (a); i <= (b); ++i)
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
const int max_value = 10000000;
int n, a[max_value+3], prime[max_value+3], prefix[max_value+3], ans, quest, x, y;

//HAM LOGIC traunapvjp 
void sangnguyento(){    //su dung thuat toan sang so nguyen to
    FOR(i, 1, max_value)    prime[i]=1;
    prime[1]=0;
    FOR(i, 2, sqrt(max_value))
        if(prime[i]==1)
            for(int j=i*i; j<=max_value; j+=i)
                prime[j]=0;
}

int quest2(int value){
    FOR(i, 0, 9){
        if(prime[value*10+i]==1)
            return 1;
    }
    return 0;        
}

int quest3(int value){
    int val_check=value/10;
    while(val_check>0){
        if(prime[val_check]==0 && val_check > 0)
            return 0;
        val_check/=10;
    }
    return 1;
}
void traunapvjp(){
    sangnguyento();
    FOR(i, 1, n){
        cin >> a[i];
        if(prime[a[i]]==1 && quest2(a[i])==1 && quest3(a[i])==1)    ++ans;
        prefix[i]=ans;
    }
    cin >> quest;
    while(quest--){
        cin >> x >> y;
        cout << prefix[y]-prefix[x-1] << "\n";
    }
}
//SU DUNG THUAT TOAN TRAU CAY:))
int kiemtrasnt(int value){
    if(value<2)    return 0;
    if(value==2)    return 1;
    if(value%2==0)  return 0;
    for(int i = 3; i <= sqrt(value); i+=2)
        if(value%i==0)
            return 0;
    return 1;
}

int dieukien2(int value){
    FOR(i, 1, 9)
        if(kiemtrasnt(value*10+i)==1)
            return 1;
    return 0;
}

int dieukien3(int value){
    int val_check=value/10;
    while(val_check>0){
        if(kiemtrasnt(val_check)==0 && val_check > 0)
            return 0;
        val_check/=10;
    }
    return 1;
}

void caytrau(){
    FOR(i, 1, n)    cin >> a[i];
    cin >> quest;
    FOR(i, 1, quest){
        cin >> x >> y;
            FOR(i, x, y)
                if(kiemtrasnt(a[i])==1 && dieukien2(a[i])==1 && dieukien3(a[i])==1)
                    ++ans;
            cout << ans << "\n";
            ans=0;
    }  
}

main(){
    FAST;
    cin >> n;
    if(n<=1000)   caytrau();
    else traunapvjp();
}
