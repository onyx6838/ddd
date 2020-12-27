#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
struct node {
	string key, value;
	node(string _key, string _value) {
		key = _key; value = _value;
	}
};

const int SIZE = 2069;
node *pool[SIZE];


int hashCode(string word) {
	int h = 0;
	for(int i=0; i<word.size(); i++) {
		h += (i + 1)*word[i];
	}
	return h % SIZE;
}

void add_bachai(string word, string mean) {
	int h = hashCode(word);
	int i = 1;
	while(pool[h] != NULL) {
		h = (h + i * i) % SIZE;
		i++;
	}
	pool[h] = new node(word, mean);
}

void add_tuyentinh(string word, string mean) {
	int h = hashCode(word);
	while(pool[h] != NULL) {
		h = (h + 1) % SIZE;
	}
	pool[h] = new node(word, mean);
}

string find_bachai(string word) {
	int h = hashCode(word);
	int i = 1;
	while(pool[h]->key != word) {
		h = (h + i * i) % SIZE;
		i++;
	}
	return pool[h]->value;
}

string find_tuyentinh(string word) {
	int h = hashCode(word);
	while(pool[h]->key != word) {
		h = (h + 1) % SIZE;
	}
	return pool[h]->value;
}

int main()
{
	add_bachai("hello", "xin chao");
	add_bachai("goodbye", "tam biet");
	cout << find_bachai("goodbye");
}
