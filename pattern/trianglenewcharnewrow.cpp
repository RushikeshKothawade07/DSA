#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    char ch = 'A';
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<ch;
            
        }
        cout<<endl;
        ch++;

    }
}
int main()
{
    int n = 5, m = 5;
    solve(n);
}
