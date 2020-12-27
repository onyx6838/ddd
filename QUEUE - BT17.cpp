#include<bits/stdc++.h>
using namespace std;
int maxMinSlidingWindow(vector<int> &nums,int k)
{
	int sum = 0;
	deque<int> Q1;
	deque<int> Q2;
	vector<int> res;
	for(int i=0;i<nums.size();i++)
	{
		while(Q1.size() && nums[i] >= nums[Q1.back()])	Q1.pop_back();
		while(Q2.size() && nums[i] <= nums[Q2.back()])	Q2.pop_back();
		Q1.push_back(i);
		Q2.push_back(i);
		if(Q1.front() == i-k)	Q1.pop_front();
		if(i>=k-1)	res.push_back(nums[Q1.front()]);
		if(Q2.front() == i-k)	Q2.pop_front();
		if(i>=k-1)	res.push_back(nums[Q2.front()]);
	}
	for(auto i:res)	sum+=i;
	return sum;
}
int main()
{
	vector<int> arr = {2, 5, -1, 7, -3, -1, -2};
	int k = 4;
	cout<<"Sum Max And Min of Sub Arr = "<<maxMinSlidingWindow(arr,k);
}
