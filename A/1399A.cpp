#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
       int x, c;
    cin>>n;
    while(n--)
    {

        cin>>x;
        int a[x];
        for(int i=0; i<x; i++)
        {
            cin>>a[i];
        }
        sort(a, a+x);
        c=0;
        for(int i=0; i<x-1; i++)
        {
            if(a[i+1]-a[i]>1)
            {
                c=1;
                break;
            }
        }
        if(c == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}
