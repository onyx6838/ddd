#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> spair;
void firstNumRoundN(vector<int> arr,int n)
{
	queue<spair> Q;
	for(int a:arr)	Q.push({a,1});
	while(1)
	{
		if(n<=Q.front().second)
		{
			cout<<Q.front().first;
			break;
		}
		n-=Q.front().second;
		Q.push({Q.front().first,Q.front().second*2});
		Q.pop();
	}
}
int main()
{
	vector<int> arr = {1,2,3,4,5};
	int n;
	cin>>n;
	firstNumRoundN(arr,n);
}
