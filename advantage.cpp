#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second = i;
    }

    sort(v.begin(),v.end());
    int max1 = v[n-1].first;
    int max2 = v[n-2].first;

    for(auto x : v){
        if(x.first==max1){
            ans[x.second] = x.first-max2;
        }
        else{
            ans[x.second]=x.first-max1;
        }
    }

    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;



}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}