#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
    vector<int>v;
	while (t--) {
		int m[3];
        for(int i=0;i<3;i++){
            cin>>m[i];
        }
        sort(m,m+3);
        cout<<m[1]<<endl;   
	}
	return 0;
}