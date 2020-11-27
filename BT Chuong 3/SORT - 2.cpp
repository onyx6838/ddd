#include <bits/stdc++.h> 
using namespace std; 
  
// function that sort input array a[] and  
// calculate mode and median using counting 
// sort. 
void countingSort()
{
	
}
void printModeMedian(int a[], int n) 
{ 
    // The output array b[] will 
    // have sorted array 
    int b[n]; 
  
    // variable to store max of 
    // input array which will  
    // to have size of count array 
    int max = *max_element(a, a+n); 
  
    // auxiliary(count) array to  
    // store count. Initialize 
    // count array as 0. Size 
    // of count array will be 
    // equal to (max + 1). 
    int t = max + 1; 
    int count[t]; 
    for (int i = 0; i < t; i++) 
        count[i] = 0;     
  
    // Store count of each element 
    // of input array 
    for (int i = 0; i < n; i++) 
        count[a[i]]++;     
      
    // mode is the index with maximum count 
    int mode = 0; 
    int k = count[0]; 
    for (int i = 1; i < t; i++) 
    { 
        if (count[i] > k) 
        { 
            k = count[i]; 
            mode = i; 
        } 
    }     
  
    // Update count[] array with sum 
    for (int i = 1; i < t; i++) 
        count[i] = count[i] + count[i-1]; 
  
    // Sorted output array b[] 
    // to calculate median 
    for (int i = 0; i < n; i++) 
    { 
        b[count[a[i]]-1] = a[i];
        count[a[i]]--;
    } 
      
    // Median according to odd and even  
    // array size respectively. 
    float median; 
    if (n % 2 != 0) 
        median = b[n/2]; 
    else
        median = (b[(n-1)/2] +  
                  b[(n/2)])/2.0; 
      
    // Output the result  
    cout << "median = " << median << endl; 
    cout << "mode = " << mode; 
} 
void findMode(vector<double> data) {
	double biggestMode = 1;
	vector<double> mode, numbers;
	numbers.push_back(data.at(0));
	mode.push_back(1);
	int count = 0;
	for (int i = 1; i < data.size(); i++) {
	    if (data.at(i) == numbers.at(count)) {
	        mode.at(count)++;
	    }
	    else {
	        if (biggestMode < mode.at(count)) {
	            biggestMode = mode.at(count);
	        }
	        count++;
	        mode.push_back(1);
	        numbers.push_back(data.at(i));
	    }
	}
	
	for (int i = 0; i < mode.size(); i++) {
	    if (mode.at(i) == biggestMode)
	        cout << numbers.at(i) << " ";
	}
	cout << endl;
}
// Driver program 
int main() 
{ 
//    int a[] = { 1, 1,2,2 }; 
//    int n = sizeof(a)/sizeof(a[0]); 
//    printModeMedian(a, n);
vector<double> arr = {1,1,2,2,3,3};
findMode(arr);
    return 0; 
} 
