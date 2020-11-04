//input :arr[]
// k
// m: smallest & >k else m = -1
// n: smallest & >= k else n = -1
// output [m,n]
#include<bits/stdc++.h>
using namespace std;
void setFunction(set<int> mySet,int k)
{
	int m = -1,n = -1;
	for(auto i:mySet)
	{
		if(i == k)
		{
			n = i;
		}
		if(i > k)
		{
			m = i;
			break;
		}
	}
	cout<<m<<" "<<n;
}
int main()
{
	int arr[] =  {1,2,3,4,5};
	set<int> s;
	for(int x:arr)	s.insert(x);
	int k = 4;
	setFunction(s,k);
}
