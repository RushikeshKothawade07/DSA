#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}
int main()
{
    int n = 5, m = 5;
    solve(n);
}
