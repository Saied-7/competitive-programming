#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(3);
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        int min = *min_element(a.begin(),a.end());
        cout<< n - min <<endl;
    }
 return 0;
}
