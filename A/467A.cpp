#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, j, k, o, t=0;
    bool flag = 0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>j>>k;
        o = k-j;
        if(o>=2)
        {
            t++;
        }
    }
    cout<<t;

}
