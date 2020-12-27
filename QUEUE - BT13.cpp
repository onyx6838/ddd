#include<bits/stdc++.h>
using namespace std;
int completeCircuit(vector<int>& gas, vector<int>& cost)
{
	int n=gas.size();
    if(n==1)
    {
        if(gas[0]-cost[0]>=0) return 0;
        else return -1;
    }
    int front=0,rear=1,tank=gas[0]-cost[0];
    while(front!=rear || tank<0)
    {
        if(tank < 0)
        {
            while(tank<0 && front!=rear)
            {
                tank-=(gas[front] - cost[front]);
                front=(front+1)%n;
                if(front==0) return -1;
            }
        }
        tank+=gas[rear]-cost[rear];
        rear=(rear+1)%n;
    }
    return front;
}
int main()
{
	vector<int> gas = {6,3,7};
	vector<int> cost = {4,6,3};
	cout<<completeCircuit(gas,cost);
}
