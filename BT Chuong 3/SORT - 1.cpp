#include<bits/stdc++.h>
using namespace std;
int Count[1000005];
vector<int> sortArray(vector<int> arr)
{   
    int maxVal = 0;
    for (int i = 0; i < (int) arr.size(); ++i) {
        int x = arr[i];
		// find max array
        maxVal = max(maxVal, x);

        // count ++ for x in arr
        Count[x]++;
    }

    vector<int> ans;
    for (int i = 1; i <= maxVal; ++i)
        for (int j = 1; j <= Count[i]; ++j) ans.push_back(i);
    return ans;
}
int main()
{
	vector<int> arr = {13, 20, 7, 4};
	vector<int> res = sortArray(arr);
	for(auto it: res)
	{
		cout<<it<<" ";
	}
}
