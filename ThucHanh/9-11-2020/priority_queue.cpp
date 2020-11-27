#include<bits/stdc++.h>
using namespace std;

int A[100005], sz=0;

void heapify(int i)
{
	int largest = i; //luu chi so cua phan tu lon nhat
	int left=2*i+1;	//vi tri con ben trai
	int right=2*i+2;//vi tri con ben phai
	
	if(left<sz and A[left]>A[i]) largest=left; // N la so phan tu mang
	if(right<sz and A[right]>A[largest]) largest=right;
	
	if(largest!=i)
	{
		swap(A[i], A[largest]);
		heapify(largest);
	}
}
void push(int x)
{
	int i=sz;
	sz=sz+1;
	A[i]=x;
	while(i>0 && A[i]>A[(i-1)/2])
	{
		swap(A[(i-1)/2], A[i]);
		i=(i-1)/2;
	}
}
void pop()
{
	if(sz==0) return;
	swap(A[sz], A[0]);
	sz--;
	heapify(0);
}
int top(){ return A[0]; }

int main()
{
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		int x; cin >> x;
		push(x);
	}
	for(int i=0;i<n;i++)	cout<<A[i]<<" ";
	cout << top();
}
