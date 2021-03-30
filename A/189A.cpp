
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int k[n+1];
    k[0] = 0;
    int x, y, z;
    for(int i=1;i<=n;i++){
        x = INT_MIN, y = INT_MIN, z = INT_MIN;
        if(i>=a){
            x = k[i-a];
        }
        if(i>=b){
            y = k[i-b];
        }
        if(i>=c){
            z = k[i-c];
        }
        k[i] = 1+ max(x, max(y, z));
    }
    cout<<k[n];
}
