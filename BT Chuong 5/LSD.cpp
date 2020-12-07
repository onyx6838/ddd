// Chi dung khi chuoi so sanh co do dai = nhau
#include<bits/stdc++.h>
using namespace std;
vector<string> sort(vector<string> a, int W)
{
	// Sort a[] on leading W characters.
	int N = a.size();
	int R = 256;
	vector<string> aux(N);
	for (int d = W-1; d >= 0; d--) 
	{ //sap xep dem ki tu thu d
		vector<int> count(R+1); // mang Tan Xuat
		for (int i = 0; i < N; i++) // Tinh Tan Xuat Cac Ki Tu Thu D
			{
				//cout<<a[i].at(d) + 1<<"\t";
				count[a[i].at(d) + 1]++;
			}
		for (int r = 0; r < R; r++) // Chuyen Sang Chi So (cog don tu trai sang  phai)
			count[r+1] += count[r];
		for (int i = 0; i < N; i++) // Phan Phoi Lai
			aux[count[a[i].at(d)]++] = a[i];
		for (int i = 0; i < N; i++) // Sao chep lai ve mang goc
			a[i] = aux[i];
	}
	return a;
}
int main()
{
	vector<string> arr = {"abe","def","abd","bcd"};
	vector<string> ans = sort(arr,3);
	cout<<"\n-------\n";
	for(auto t:ans)	cout<<t<<endl;
}
