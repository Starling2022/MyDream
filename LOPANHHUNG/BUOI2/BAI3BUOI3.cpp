#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;cin>>n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    int count(1);int ans(0);
    vector<int> v_count;
    for (int i = 1; i < n; i++)
    {
      if(v1[i]==v1[i-1]) count++;
      else{
        v_count.push_back(count);
        count=1;
      }
      if (i==n-1)
      {
        v_count.push_back(count);
      }
    }
    for (int i = 0; i < v_count.size()-1;i++)
    {
         ans=max(ans,min(v_count[i],v_count[i+1]));
    }
    cout<<2*ans;
    return 0;
}