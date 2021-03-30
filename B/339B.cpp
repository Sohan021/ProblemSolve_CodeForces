#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin>>n>>m;

    long long int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    long long count = a[0]-1;
    for(int i=0;i<m-1;i++){

        if(a[i+1]>a[i]){
            count = count + a[i+1]-a[i];
        }
        if(a[i+1]<a[i]){
            count = count + a[i+1] + (n-a[i]);
        }
        if(a[i+1] == a[i]){
            count = count;
        }
    }

    cout<<count<<endl;

}
