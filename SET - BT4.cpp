// 1,2,2,3 -> need t remove 1 element
// vector -> set
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	set<int> mySet;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	for(auto i: v){
		mySet.insert(i);
	}
	cout<<"Need to remove : "<<v.size() - mySet.size();
}
