#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,n,m,c,a;

    cin>>n;

    m = 0;
    int ar[n+1];

    for(int i=0;i<n;i++){
        cin>>ar[i];
        m=max(ar[i], m);
    }
    a=0;
    for(int i=0;i<n;i++){
        a+=m-ar[i];
    }
    cout<<a<<endl;
}
