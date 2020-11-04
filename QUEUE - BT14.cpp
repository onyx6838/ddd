#include<bits/stdc++.h>
#define pii pair<float,float>
using namespace std;
typedef struct coor
{
	int x,y;
};
bool cmp(coor a,coor b)
{
	return a.x*a.x+a.y*a.y < b.x*b.x+b.y*b.y;
}

int main()
{
	auto comp = [](coor a,coor b)
	{
		return a.x*a.x+a.y*a.y < b.x*b.x+b.y*b.y;
	};
	vector<coor> s = {{1, 0}, {2, 1}, {3, 6}, {-5, 2}, {1, -4}};
	sort(s.begin(),s.end(),cmp);
	priority_queue<coor,vector<coor>,decltype(comp)> Q(comp);
	for(auto x:s)	Q.push(x);
	for(int i=0;i<3;i++)	cout<<s[i].x<<" "<<s[i].y<<endl;
	cout<<"---------------------------";
	while(!Q.empty())
	{
		cout<<Q.top().x<<" "<<Q.top().y;
		Q.pop();
	}
}
