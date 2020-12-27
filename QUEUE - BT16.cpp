#include<bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWin(vector<int> &nums,int k)
{
	int z = nums.size();
	vector<int> res;
	deque<int> Q;
	for(int i=0;i<z;i++)
	{
		while(Q.size() && nums[i] >= nums[Q.back()])	Q.pop_back();
		Q.push_back(i);
		if(Q.front() == i-k)	Q.pop_front();
		if(i>=k-1)	res.push_back(nums[Q.front()]);
	}
	return res;
}
int main()
{
	vector<int> t;
	int n,k,x;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		t.push_back(x);
	}
	//vector<int> a ={4,7,2,5 ,6, 3, 9, 1};
	//int k = 3;
	vector<int> s = maxSlidingWin(t,k);
	for(auto i:s)	cout<<i<<" ";
}
