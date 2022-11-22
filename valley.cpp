#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag=0;
    int inc=0,dec=0;

    for(int i=1;i<n;i++){
        if(a[i]>a[i-1])
            inc++;
        else if(a[i]<a[i-1])
        {
            dec++;

        if(inc>0){
            flag=1;
            break;
        }
        }

    }
    if(flag==1)
    {
         cout<<"NO"<<endl; 
         return;
    }
    if(flag==0) {
        cout<<"YES"<<endl;
    return;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}