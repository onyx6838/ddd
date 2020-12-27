#include<bits/stdc++.h>
using namespace std;
struct coor{	int x,y;	};
struct cmp{
	bool operator()(coor a,coor b) {	return a.x*a.x+a.y*a.y < b.x*b.x+b.y*b.y;	}
};
int main()
{
	vector<coor> s = {{1, 0}, {2, 1}, {3, 6}, {-5, 2}, {1, -4}};
	int k;cin>>k;	
	cout<<"\n------";
	priority_queue<coor,vector<coor>,cmp> Q;
	for(coor x:s)	Q.push(x);
	while(k--)
	{
		cout<<Q.top().x<<" "<<Q.top().y;
		Q.pop();
	}
}
