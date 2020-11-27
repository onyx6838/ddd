#include<bits/stdc++.h>
using namespace std;
void sortWithRemainder(int arr[],int n,int k)
{
	vector<int> v[k];
	for(int i=0;i<n;i++)
		v[arr[i]%k].push_back(arr[i]);
		
	for(int i=0;i<k;i++)
		sort(v[i].begin(),v[i].end());

//	int j = 0;
//	for (int i = 0; i < k; i++)
//        for (auto it = v[i].begin();it != v[i].end(); it++) 
//            arr[j++] = *it;
	int index = 0;
	for(int i = k - 1 ;i>=0;i++)
		for(int j=0; j<v[i].size(); j++)
			arr[index++] = v[i][j];

    for(int i=0;i<n;i++)	cout<<arr[i]<<" ";
}
int main()
{
	int arr[] = {};
	int n = sizeof(arr)/sizeof(int);
	int k = 5;
	sortWithRemainder(arr,n,k);
}
