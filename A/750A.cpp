#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, sum=0, c=0;
    cin>>n>>k;
    int i;
    int l=240-k;
    for(i=1;i<=n;i++){
        sum = sum + 5*i;
        if(sum<=l){
            c++;
        }
    }
    cout<<c<<endl;
}
