#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n >> k;
        int pow = 1;

        for(int i=1; i<=n-k+1;  i++)
        {
            pow = pow * 2;
        }
        int ans = pow + 2*(k-1);
        cout<< ans <<endl;
    }
 return 0;
}