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
	    for (char c : word){
if (temp->children.count(c) == 0) temp->children[c]=new Node();
          temp = temp->children[c];
        	}
		temp->isLeaf = true;
	  }
	  Node *havePre(string prefix)
	  {
		if(prefix.empty())	return NULL;
		if(root == nullptr)	return NULL;
		Node *temp = root;
        	for (char c : prefix){
            	if (temp->children.count(c) == 0) return NULL;
            	temp = temp->children[c];
        	}
        	return temp;
		}
	void print(Node *root, string candidate, string pre)
	{
		if(pre.empty())	return;
		if(root == nullptr)	return;
	if(root->isLeaf==true) cout << pre + candidate << endl;
		for(auto t:root->children)
		  print(t.second, candidate + t.first, pre);
	}
};
int main()
{
	Trie T;
	int n; cin>>n;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		T.insert(x);
	}
	cout<<"\n-------------\n";
	string find;
	cin>>find;
	Node* last = T.havePre(find);
	if(last == NULL){cout<<"Khong co tien to";return 0;}
	T.print(last , "", find);
}

