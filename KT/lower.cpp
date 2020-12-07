#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s = "HowAreYouToday";
	string rs = "";
	rs += tolower(s[0]);
	for(int i=1;i<s.length();i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z')	rs+= " ";
		rs+= tolower(s[i]);
	}
	cout<<rs;
}

