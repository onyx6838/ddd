// tim gtri nho thu 2 --> k co return "NO"
// array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a = {1,2,3,1,1};
	if(a.size()<2)	{cout<<"NO";return 0;}
	set<int> s;
	for(int i=0;i<a.size();i++)
	{
		s.insert(a[i]);
	}
	cout<<"Second min";
	set<int>::iterator it = s.begin();
	advance(it,1);	// Dich chuyen con tro tien len 1 phan tu
	cout<<*it<<endl;	
	cout<<"---------------";
	cout<<"Cac so gom";
	for(it = s.begin();it!=s.end();++it)
	{
		cout<< ' '<<*it;
	}
}
