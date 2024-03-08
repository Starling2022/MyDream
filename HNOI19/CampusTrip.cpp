//https://oj.vnoi.info/problem/hnoi19_campus
#include<bits/stdc++.h>
#define ll long long
#define N 5005
#define M 1000005
#define Q 100005

using namespace std;
inline int Get() {int x=0,f=1;char ch=getchar();while(ch<'0'||ch>'9') {if(ch=='-') f=-1;ch=getchar();}while('0'<=ch&&ch<='9') {x=(x<<1)+(x<<3)+ch-'0';ch=getchar();}return x*f;}

int n,m,q;
struct road {
	int to,nxt;
}s[M<<1];

int h[N],cnt;
void add(int i,int j) {
	s[++cnt]=(road) {j,h[i]};h[i]=cnt;
}
vector<int>e[N];
bool ans[N][N];
char str[N];
int col[N];

#define pr pair<int,int>
#define mp(a,b) make_pair(a,b)

queue<pr>que;
vector<pr>vec;

void bfs() {
	for(int i=0;i<vec.size();i++) {
		int a=vec[i].first,b=vec[i].second;
		if(a>b) swap(a,b);
		ans[a][b]=1;
		que.push(mp(a,b));
	}
	while(!que.empty()) {
		int x=que.front().first,y=que.front().second;
		que.pop();
		for(int i=h[x];i;i=s[i].nxt) {
			for(int j=h[y];j;j=s[j].nxt) {
				int a=s[i].to,b=s[j].to;
				if(col[a]!=col[b]) continue ;
				if(a>b) swap(a,b);
				if(!ans[a][b]) {
					ans[a][b]=1;
					que.push(mp(a,b));
				}
			}
		}
	}
}

int f[N];
int Getf(int v) {return v==f[v]?v:f[v]=Getf(f[v]);}

int flag;
int w[N];
void dfs(int v,int Col) {
	w[v]=Col;
	for(int i=0;i<e[v].size();i++) {
		int to=e[v][i];
		if(w[to]==-1) {
			add(v,to),add(to,v);
			dfs(to,Col^1);
		} else if(w[v]==w[to]) flag=0;
		ans[v][to]=ans[to][v]=1;
		que.push(mp(min(v,to),max(v,to)));
	}
}

int main() {
	n=Get(),m=Get(),q=Get();
	scanf("%s",str+1);
	for(int i=1;i<=n;i++) col[i]=str[i]-'0';	
	for(int i=1;i<=n;i++) f[i]=i;
	int a,b;
	for(int i=1;i<=m;i++) {
		a=Get(),b=Get();
		if(col[a]!=col[b]) {
			if(Getf(a)!=Getf(b)) {
				add(a,b),add(b,a);
				f[Getf(a)]=Getf(b);
			}
		} else {
			e[a].push_back(b),e[b].push_back(a);
		}
		if(a>b) swap(a,b);
		if(col[a]==col[b]) vec.push_back(mp(a,b));
	}
	for(int i=1;i<=n;i++) vec.push_back(mp(i,i));
	memset(w,-1,sizeof(w));
	for(int i=1;i<=n;i++) {
		if(w[i]!=-1) continue ;
		flag=1;
		dfs(i,0);
		if(!flag) add(i,i);
	}
	bfs();
	while(q--) {
		a=Get(),b=Get();
		if(a>b) swap(a,b);
		if(ans[a][b]) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
