#include<bits/stdc++.h>
using namespace std;
int checkSum(vector<int> arr, int sum)
{
	map<int, int> mp;
    for (auto it:arr)
    {
        int rest=sum-it;
        if (mp.find(rest)!=mp.end())
        {
            return 1;
        }
        mp[it]++;
    }
    return 0;
}
bool check(vector<int> arr, int sum){
    map<int, int> mp;
    for (auto x : arr)
        mp[x]++;
    for (auto x : arr)
    {
        if (mp[sum-x] >= 1)
        {
            if (x != sum-x || (x == sum-x && mp[x] > 1))
                return true;
        }
    }
    return false;
}
int main()
{
	vector<int> arr = {2,4};
	cout<<checkSum(arr,4);
}
