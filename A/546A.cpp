#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w, sum=0, result;

    cin>>k>>n>>w;

    for(int i=1;i<=w;i++){
        sum = sum + k*i;
    }

    result = sum-n;
    if(result>0)
        cout<<result<<endl;
    else
        cout<<0<<endl;
}
