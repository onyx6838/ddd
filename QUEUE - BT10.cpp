#include<bits/stdc++.h>
using namespace std;
vector<int> firstNegative(vector<int> a, int k)
{
    queue<int> q;
    for(int i=0;i<a.size();i++)
		if(a[i] < 0)	q.push(i);
    vector<int> ret;
    if(q.size()==0)	return ret;
    for (int i=0;i <= a.size();i++)
	{
        if(i == q.front())
		{
			ret.push_back(a[i]);
			q.pop();
		}
        else
		{
            if (q.empty() == true)
			{
				ret.push_back(0);
				continue;
			}
            if(i + (k - 1) >= q.front())	ret.push_back(a[q.front()]);
			else ret.push_back(0);
        }
    }
    return ret;
}
int main()
{
	vector<int> a = {0,5,5,6,-8};
	int k = 2;
	vector<int> rs = firstNegative(a,k);
	for(auto i:rs)	cout<<' '<<i;
}
