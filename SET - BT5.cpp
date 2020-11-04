#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	set<string> S;
	cin >> str;
	int lenstr = str.length();
	while(lenstr--) 
	{
		S.insert(str);
		str = str.back() + str;
		str.pop_back();
	}
	for(auto t:S) cout << t << endl;
}
