#include<bits/stdc++.h>
using namespace std;
struct DFS
{
	int n,m;
	vector<int> A[100];
	
	map<int,int> d;
	void input()
	{
		cout<<"Nhap n ,m"<<endl;
		cin>>n>>m;
		while(m--)
		{
			int p,q;
			cin>>p>>q;
			A[p].push_back(q);
		}
		for(int i=1;i<=n;i++)
		{
			dfs(0,i);
			cout<<endl;
		}
	}
	void dfs(int s,int f)
	{
		stack<int> Q;
		Q.push(s);
		while(Q.size())
		{
			int u = Q.top(); Q.pop();
			if(u == f)
			{
				induong(s,f);
				return;
			}
			for(int i = 0;i < A[u].size();i++)
			{
				int v = A[u][i];
				d[v] = u;
				Q.push(v);
			}
		}
		cout<<"Khong di duoc";
	}
	void induong(int s,int f)
	{
		if(s==f)	cout<<s;
		else
		{
			induong(s,d[f]);
			cout<<"->"<<f;
		}
	}
};
struct BFS
{
	int n,m;
	vector<int> A[100];
	
	map<int,int> d;
	void input()
	{
		cout<<"Nhap n ,m"<<endl;
		cin>>n>>m;
		while(m--)
		{
			int p,q;
			cin>>p>>q;
			A[p].push_back(q);
		}
		for(int i=1;i<n;i++)
		{
			bfs(0,i);cout<<endl;
		}
	}
	void bfs(int s,int f)
	{
		queue<int> Q;
		Q.push(s);
		while(Q.size())
		{
			int u = Q.front(); Q.pop();
			if(u == f)
			{
				induong(s,f);
				return;
			}
			for(int i = 0;i < A[u].size();i++)
			{
				int v = A[u][i];
				d[v] = u;
				Q.push(v);
			}
		}
		cout<<"Khong di duoc";
	}
	void induong(int s,int f)
	{
		if(s==f)	cout<<s;
		else
		{
			induong(s,d[f]);
			cout<<"->"<<f;
		}
	}
};
int main()
{
	DFS g;
	g.input();
}
//6 12
//0 1
//0 2
//0 3
//1 3
//1 4
//2 5
//3 2
//3 5
//3 6
//4 3
//4 6
//6 5
