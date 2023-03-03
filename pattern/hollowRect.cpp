#include <bits/stdc++.h>
using namespace std;
void solve(int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if (i == 1 || i==n || j==1 || j == m)
            {
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }

         cout<<endl;
    }
}
int main()
{
    int n = 4, m = 5;
    solve(n, m);
}
