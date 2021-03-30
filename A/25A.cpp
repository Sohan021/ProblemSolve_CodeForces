#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, c=0, store, result;
    bool flag = false;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            c++;
            if(c == 2)
            {
                flag = true;
            }
        }
    }
    if(flag == true)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                store = i;
            }
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                store = i;
            }
        }
    }

    result = store+1;

    cout<<result<<endl;

}
