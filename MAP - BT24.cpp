#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> arr)
{
    map <int, int> cnt;
    for (auto x : arr)
        cnt[x]++;
    int ans = -1;
    int fre = INT_MAX;
    for (auto x : cnt)
    {
        if (x.second <= fre)
        {
            fre = x.second;
            ans = x.first;
        }
    }
    return ans;
}
int main()
{
	vector<int> arr = {999999999, 999999999, 1000000000,43352345,4,5,6,3};
	cout << largestElement(arr);
}
