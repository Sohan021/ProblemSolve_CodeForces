#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i, j;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
            if(a[j]==i)
                cout<<j+1<<" ";
        }
    }
}
