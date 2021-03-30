#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, s=0;
    cin>>k>>r;
    for(int i=1;;i++){
        s=s+k;
        if((s%10==0) || (s%10==r)){
            cout<<i;
            break;
        }
        else{
            continue;
        }
    }
}
