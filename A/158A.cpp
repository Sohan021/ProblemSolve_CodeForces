#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, a[100],i, v, c=0;

    cin>>n>>k;


    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    v = a[k-1];

    for(i=0; i<n; i++)
    {
        if(a[i] >= v && a[i]>0)
            c++;

    }


    cout<<c<<endl;
}
