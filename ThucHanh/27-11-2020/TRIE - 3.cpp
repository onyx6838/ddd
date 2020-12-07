#include<bits/stdc++.h>
using namespace std;
struct Node{
	bool isLeaf;
	unordered_map<char, Node *> children;
	Node(){	isLeaf = false; }
};
class Trie
{
	private:
		Node *root;
	public:
		Trie(){ root = nullptr; }
		void insert(string word)
		{
			int len = word.length();
			if(len == 0)	return;
			if(root == nullptr)	root = new Node();
			Node *temp = root;
			for(int i;i < len; i++)
			{
				if(temp->children.find(word[i]) == temp->children.end())	temp->children[word[i]] = new Node();
				temp = temp->children[word[i]];
			}
			temp->isLeaf = true;
		}
		bool search(string word)
		{
			if(word.empty())	return true;
			if(root == nullptr)	return false;
			Node *temp = root;
			for(int i=0; i < word.length();i++)
			{
				if(temp->children.find(word[i]) == temp->children.end())	return false;
				temp = temp->children[word[i]];
			}
			return temp->isLeaf;
		}
};
int main()
{
	Trie T;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)	
	{
		string x;
		cin>>x;
		T.insert(x);
	}
	cout<<"\n--------";
	string find;
	cin>>find;
	cout<<T.search(find);
}
