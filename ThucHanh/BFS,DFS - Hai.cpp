#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;

int n, k;
vector<int> d[100005];
int par[100005];

void findway(int s, int f)
{
	if(par[f]!=s) findway(s, par[f]);
	printf("->%d", f);
}
void DFS(int s, int f)
{
	stack<int> S;
	S.push(s);
	while(S.size())
	{
		int u=S.top(); S.pop();
		if(u==f){findway(s,f); return;}
		for(int next:d[u])
		{
			par[next]=u;
			S.push(next);
		}	
	}
	printf(" di duoc!");
}
void BFS(int s, int f)
{
	queue<int> Q;
	Q.push(s);
	while(Q.size())
	{
		int u=Q.front(); Q.pop();
		if(u==f){findway(s,f); return;}
		for(int next:d[u])
		{
			par[next]=u;
			Q.push(next);
		}	
	}
	printf(" di duoc!");
}

int main()
{
	cout << "Nhap so dinh:"; cin >> n;
	cout << "Nhap so quan he:"; cin >> k;
	for(int i=0; i<k; i++)
	{
		printf("Nhap cap quan he(%d):", i+1);
		int u, v; cin >> u >> v;
		d[u].push_back(v);
	}
	for(int i=0; i<n; i++)
	{
		printf("Tu 0->%d:0", i);
		DFS(0, i);
		printf("\n");
	}
}
