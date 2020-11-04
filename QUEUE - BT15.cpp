#include<bits/stdc++.h>
using namespace std;
void multiply(int arr[],int k)
{
	int multi = 1;
	priority_queue<int> Q;
	for(int i=0;i<k;i++)	Q.push(arr[i]);
	while(!Q.empty())	
	{
		multi *= Q.top();
		Q.pop();
	}
	cout<<multi;
}
int main()
{
	int arr[] = {1,1,4,3,2,1,5,6};
	int k = 5;
	multiply(arr,k);
}
