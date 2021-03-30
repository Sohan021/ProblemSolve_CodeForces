#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, temp=0, store=0, substore=0, c=0, d;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int j=0;j<m-n+1;j++){

            store = a[j+n-1]-a[j];
            c++;
            if(store > substore && c!= 1){
                continue;
            }
            else{
                substore = store;
            }
    }
    cout<<substore;
}
