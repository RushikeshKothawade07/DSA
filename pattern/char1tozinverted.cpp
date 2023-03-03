#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    for(int i=n;i>=1;i--){
        char ch = 'A';
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;

    }
}
int main()
{
    int n = 5, m = 5;
    solve(n);
}
