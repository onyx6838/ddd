#include<bits/stdc++.h>
using namespace std;
int k;
bool ss(int a, int b)
{
	return a%k == b%k?a<b:a%k>b%k;
}
int main()
{
	int a[]={5,8,4,2,5,9,4,10,104};
	k=5;
	int n=sizeof(a)/sizeof(int);
	sort(a, a+n, ss);
	for(int i=0; i<n; i++) cout << a[i] <<" ";
}
