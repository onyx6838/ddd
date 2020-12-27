#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char,int> M;
	string s;
	cin>>s;
	for(auto x:s)	M[x]++;
	for(auto x:M)	cout<<x.first<<" "<<x.second;
}
