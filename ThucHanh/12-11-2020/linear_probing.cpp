#include<bits/stdc++.h> 
using namespace std; 
template<typename K, typename V> 
class HashNode 
{ 
    public: 
    V value; 
    K key; 

    HashNode(K key, V value) 
    { 
        this->value = value; 
        this->key = key; 
    } 
}; 
   
template<typename K, typename V> 

class HashMap 
{ 
    HashNode<K,V> **arr; 
    int capacity; 
    int size; 

    public: 
    HashMap() 
    { 
        capacity = 20; 
        size=0; 
        arr = new HashNode<K,V>*[capacity]; 
          
        for(int i=0 ; i < capacity ; i++) 
            arr[i] = NULL;
    }
    int hashFunction(string s)
	{
		int len = s.size();
		int sum = 0;
		for(int i=0;i<len;i++)
			sum+= (int)(s[i]) * (i+1);
		return sum % capacity;
	}	
    int hashFunc(K s)
	{
		int len = s.size();
		int sum = 0;
		for(int i=0;i<len;i++)
			sum+= (int)(s[i]) * (i+1);
		return sum % capacity;
	}  
    void insertNode(K key, V value) 
    { 
        HashNode<K,V> *temp = new HashNode<K,V>(key, value); 
        int hashIndex = hashFunc(key);
        while(arr[hashIndex] != NULL && arr[hashIndex]->key != key && arr[hashIndex]->key != "")
        { 
            hashIndex++;
            hashIndex %= capacity;
        }
        if(arr[hashIndex] == NULL || arr[hashIndex]->key == "") 	size++; 
        arr[hashIndex] = temp; 
    } 
    
    V get(string key)
    {
        int hashIndex = hashFunction(key);
        int counter=0;
        
        while(arr[hashIndex] != NULL)
        {    
			int counter = 0; 
            if(counter++ > capacity)	return NULL;      
            
            if(arr[hashIndex]->key == key)
                return arr[hashIndex]->value;
            hashIndex++;
            hashIndex %= capacity; 
        } 
        return NULL; 
    }
 
    void display() 
    { 
        for(int i=0 ; i<capacity ; i++) 
        { 
            if(arr[i] != NULL && arr[i]->key != "") 
                cout << "key = " << arr[i]->key  
                     <<"  value = "<< arr[i]->value << endl; 
        } 
    } 
};
int main() 
{ 
    HashMap<string, string> *h = new HashMap<string, string>; 
    h->insertNode("I","toi");
    h->insertNode("you","ban");
    h->display();

	string s = "I";
	cout<< h->get(s);
} 
