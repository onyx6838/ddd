#include<bits/stdc++.h>
using namespace std;
string hashTable[2069];
int hashTableSize = 2069;
int hashFunc(string s)
{
	int len = s.size();
	int sum = 0;
	for(int i=0;i<len;i++)
		sum+= (int)(s[i]) * (i+1);
	return sum % 2069;
}
void insert(string s)
{
    int index = hashFunc(s);
    while(hashTable[index] != "")
        index = (index + 1) % hashTableSize;
    hashTable[index] = s;
}
void search(string s)
{
    int index = hashFunc(s);
    while(hashTable[index] != s and hashTable[index] != "")
        index = (index + 1) % hashTableSize;
    if(hashTable[index] == s)
        cout << s << " is found!" << endl;
    else
        cout << s << " is not found!" << endl;
}
int main()
{
	insert("toi");
	insert("anh ay");
	insert("co ay");
	search("toi");
}

