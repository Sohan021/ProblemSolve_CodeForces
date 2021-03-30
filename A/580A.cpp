#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i, j, c=1, d=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            if(c>d){
                d=c;
            }
            c=1;
        }
        else{
            c++;
        }
    }
    if(c>d){
        d=c;
    }
    cout<<d<<endl;
}
