#include<bits/stdc++.h>
using namespace std;
typedef pair<string,string> KV;
list<KV> hashTable[2069];
int hashTableSize = 2069;
int hashFunc(string s)
{
	int len = s.size();
	int sum = 0;
	for(int i=0;i<len;i++)
		sum+= (int)(s[i]) * (i+1);
	return sum % 2069;
}
void insertWithKV(KV s)
{
    int index = hashFunc(s.first);

    while(hashTable[index] != make_pair("",""))
        index = (index + 1) % hashTableSize;
    hashTable[index] = s;
    //hashTable[index].push_back(s);
}

void search(string s)
{
    int index = hashFunc(s);
    for(auto i:hashTable[index])	
    {
    	if(i.first == s)	cout<<i.second;
	}
    
//    while(hashTable[index] != s and hashTable[index] != "")
//        index = (index + 1) % hashTableSize;
//    
//    if(hashTable[index] == s)
//        cout << s << " is found!" << endl;
//    else
//        cout << s << " is not found!" << endl;
}
int main()
{
	insertWithKV(make_pair("I","toi"));
	insertWithKV(make_pair("I","cos"));
	insertWithKV(make_pair("I","toi"));
	insertWithKV(make_pair("We","chung toi"));
	
	//insertT("ban");
	//search("toi");
	//search("We");
}
