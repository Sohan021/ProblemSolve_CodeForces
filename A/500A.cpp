#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    cin>>n>>b;
    int a[n-1];
    for(int i=0;i<(n-1);i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<(n-1);)
    {
        i+=a[i];
        if(i==(b-1))
        {
            cout<<"YES"<<endl; return 0;
        }

    }
     cout<<"NO"<<endl;
     return 0;
}

