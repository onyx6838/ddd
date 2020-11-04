#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	string s;
	cin>>s;
	set<char> ss;
	for(char x:s) ss.insert(x);
	cin>>k;
	if(k>s.size())	cout<<"imp";
	else cout<<k-ss.size();
}
