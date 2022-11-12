#include <bits/stdc++.h>
using namespace std;
void rushi() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (n % 2 != 0) {
		cout << "NO" << endl;
		return ;
	}
	int A[26] = {0};
	for (int i = 0; i < n; i++)
	{
		A[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (A[i] % 2 != 0) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;

}
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		rushi();
	}
	return 0;
}
