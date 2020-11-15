#include<bits/stdc++.h>
using namespace std;
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
{
	int total=0;
	int start=0;
	int temp=0;
	for(int i=0;i<gas.size();i++)
	{
		total+=(gas[i]-cost[i]);
		temp+=(gas[i]-cost[i]);
		if(temp<0)
		{
			start=i+1;
			temp=0;
		}
	}
	if(total<0)
	return -1;
	return start;
}
int main()
{
	vector<int> gas = {2,3,4};
	vector<int> cost = {3,4,3};
	cout<<canCompleteCircuit(gas,cost);
}
