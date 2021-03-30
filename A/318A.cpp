#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n, k, r;

    cin>>n>>k;

    if(n%2==0){
        i=n/2;
    }
    else{
        i=(n/2)+1;
    }

    if(k>i){
        r=(k-i)*2;
    }
    else{
        r=(k*2)-1;
    }

    cout<<r<<endl;
}
