#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t1=0, t2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]>0){
            t1+=a[i];
        }
        else if(t1>0){
            t1--;
        }
        else{
            t2++;
        }
    }
    cout<<t2<<endl;
}
