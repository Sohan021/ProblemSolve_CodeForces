#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n;
    int a[n], b[n];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){

        if(a[i]%2 == 0){
            b[i] = a[i]/2-1;

        }

        if(a[i]%2 != 0){
            b[i] = (a[i]/2);
        }

    }
    for(i=0;i<n;i++){
        cout<<b[i]<<endl;
    }
}
