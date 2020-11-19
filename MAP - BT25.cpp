#include<bits/stdc++.h>
vector<int> countPrefix(vector<string> contacts, vector<string> names)
{
    map<string, int> mp;
    for (auto x : names)
    {
        int cnt = 0;
        for (auto y : contacts)
        {   
            bool f = 1;
            for (int i = 0; i < x.length(); i++)
            {
                if (x[i] != y[i])
                    f = 0;
            }
            if (f)
                cnt++;
        }
        mp[x] = cnt;
    }
    vector<int> result;
    for(auto name:names){
        result.push_back(mp[name]);
    }
    return result;
}
using namespace std;
int main()
{
}

