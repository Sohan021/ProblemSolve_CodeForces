#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,cnt=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(5-a[i]>=k){
            cnt++;
        }
    }
    int result = cnt/3;
    cout<<result;
    return 0;
}
