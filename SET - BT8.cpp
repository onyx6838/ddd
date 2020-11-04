#include<bits/stdc++.h>
using namespace std;
int main()
{
	string fr[]= {"watermelon", "grapes", "grapes", "apple", "grapes"};
	set<string> s;
	for(auto x:fr)	s.insert(x);
	for(auto x:s)	cout<<' '<<x;
}
