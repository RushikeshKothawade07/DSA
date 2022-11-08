#include<bits/stdc++.h>
using namespace std;

void printSubsequences(int ind, vector<int>&ds, int s, int sum, int arr[], int n)
{
	if (ind == n) {
		if (sum == s) {
			for (auto it : ds)
			{
				cout << it << " ";
			}
			cout << endl;
		}
		return;
	}
	ds.push_back(arr[ind]);
	s += arr[ind];
	printSubsequences(ind + 1, ds, s, sum, arr, n);
	s -= arr[ind];
	ds.pop_back();
	printSubsequences(ind + 1, ds, s, sum, arr, n);
}
int main() {
	int arr[] = {1, 2, 1};
	int n = 3;
	int sum = 2;
	vector<int>ds;
	printSubsequences(0, ds, 0, sum, arr, n);
}