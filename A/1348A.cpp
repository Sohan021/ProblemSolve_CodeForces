#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, result;
    cin>>t;
    while(t--){
        cin>>n;
        result = pow(2, n/2+1)-2;
        cout<<result<<endl;
    }
}
