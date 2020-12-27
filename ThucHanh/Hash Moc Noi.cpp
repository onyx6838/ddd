#include<bits/stdc++.h>
using namespace std;
struct word { 
	string e, v;
	word(string _e, string _v) {
		e = _e;
		v = _v;
	}
	word() {
		e = "";
		v = "";
	}
};
int POOL_SIZE = 2069;
struct hashTable {
	list<word> P[2069];
	int getHashCode(string target) {
		int hashcode = 0;
		for(int i = 0; i < target.size(); ++i)
		{
			hashcode += ((int)target[i])*(i+1);
		}
		return hashcode % POOL_SIZE;
	}
	void push(word target)
	{
		int hashcode = getHashCode(target.e);
		P[hashcode].push_back(target);
	}
	bool containsWord(string target)
	{
		int hashcode = getHashCode(target);
		if(!P[hashcode].size())
			return false;
		else 
		{
			for(word candidate : P[hashcode]) 
			if(candidate.e == target) return true;
		}
		return false;
	}
	string get(string target)
	{
		int hashcode = getHashCode(target);
		for(word candidate : P[hashcode])
		if(candidate.e == target) return candidate.v;
		return "";
	}
};
int main() {
	freopen("words.txt", "r", stdin);
	int n;
	word A;
	hashTable hashtable;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		cin >> A.e >> A.v;
		hashtable.push(A);
	}
	string w = "six";
	if(hashtable.containsWord(w) == true) 
cout << w << " : " <<hashtable.get(w);
	else cout << "Khong tim duoc!";
}

