#include<bits/stdc++.h>
using namespace std;
struct Graph
{
	int n,m;
	vector<int> A[10005];
	map<int,int> d;
	void input()
	{
		cout<<"Nhap n ,m"<<endl; 	cin>>n>>m;
		cout<<"Nhap canh"<<endl;
		while(m--) {
			int p,q;	cin>>p>>q;
			A[p].push_back(q);
		}
	}
	void bfs(int s,int f)	// dfs thay =  stack
	{
		int dis[100005] = {};
		queue<int> Q;
		Q.push(s);
		dis[s] = 0;
		while(Q.size())
		{
			int u = Q.front(); Q.pop();
			if(u == f){  induong(s,f);  return; }
			for(int next:A[u])
			{
				if(!dis[next])
				{
					dis[next] = dis[u] + 1;
					d[next] = u;
					Q.push(next);
				}
			}
		}
		cout<<"Khong di duoc";
	}
	void dfs(int s,int f)
	{
		int dis[100005] = {};
		stack<int> Q;
		Q.push(s);
		dis[s] = 0;
		while(Q.size())
		{
			int u = Q.top(); Q.pop();	// #
			if(u == f) {  induong(s,f);	return; }
			for(int next:A[u])
			{
				if(!dis[next])
				{
					dis[next] = dis[u] + 1;
					d[next] = u;
					Q.push(next);
				}
			}
		}
		cout<<"Khong di duoc";
	}
	void induong(int s,int f)
	{
		if(s==f)	cout<<s;
		else { induong(s,d[f]); cout<<"->"<<f; }
	}
};
int main()
{
	Graph g;  g.input();
	for(int i=1;i<=g.n;i++)
	{
		g.dfs(0,i);
		cout<<endl;
	}
}
