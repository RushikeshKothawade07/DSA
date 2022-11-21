#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
   
	while (t--) {
        int n;
        cin>>n;
		string s;
        cin>>s;

        sort(s.begin(),s.end());
        int ans = s[n-1]-'a' +1;
        cout<<ans<<endl;  
	}
	return 0;
}