#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	if(n<=1)	return false;
	for(int i=2;i*i<=n;i++)
		if(n % i == 0)	return false;
	return true;
}
vector<int> superPrimeNumber(int n)
{
	queue<int> Q;
	vector<int> v;
	for(int i=2;i<=n,i<10;i++)	if(prime(i))	Q.push(i);
	while(!Q.empty())
	{
		for(int i=1;i<=9;i++)
		{
			int k = Q.front() * 10 + i;
			if(k<=n && prime(k))	Q.push(k);
		}
		v.push_back(Q.front());
		Q.pop();
	}
	return v;
}
int main()
{
	vector<int> a = superPrimeNumber(30);
	for(auto x:a)	cout<<x<<" ";
}
