#include<bits/stdc++.h>
using namespace std;
void printKMax(int arr[], int n, int k)
{
	deque<int> Qi(k);
	int i;
	for(i=0; i<k; i++)
	{
		// For every element, the previous smaller elements are useless so 
		// remove from Qi
		while((!Qi.empty()) && arr[i] >= arr[Qi.back()])
			Qi.pop_back(); // remove from rear
		// Add new element at rear of queue
		Qi.push_back(i);
	}
	
	// Process rest of the elements, from arr[k] to arr[n-1]
	for(; i<n; ++i)
	{
		cout<<arr[Qi.front()]<<" ";
		while((!Qi.empty()) && Qi.front()<= i-k)
			Qi.pop_front();
		while((!Qi.empty()) && arr[i]>=arr[Qi.back()])
			Qi.pop_back();
		Qi.push_back(i);
	}
	
	cout<<arr[Qi.front()];
}
int main()
{
	int arr[] = {1,2,3,1,4,5,2,3,6};
	int n = sizeof(arr) / sizeof(int);
	int k = 3;
	printKMax(arr,n,k);
	return 0;
}
