#include<bits/stdc++.h>
using namespace std;
string dup(string str)
{
	string res = "";
	set<char> s;
	for(auto x:str)	s.insert(x);
	for(auto t:s)	res+=t;
	return res;
}
int main()
{
	string s[] = {"a","aa","aaa","ab","abb","bab"};
	set<string> ss;
	for(string i:s)
	{
		ss.insert(dup(i));	
	}
	cout<<ss.size();
}
