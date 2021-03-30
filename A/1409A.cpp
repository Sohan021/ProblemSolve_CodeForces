#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, r, t;
    cin>>n;
    while(n--){
        cin>>a>>b;
        a=abs(a-b);
        r = a/10;
        t = a%10;
        int result = r+(t!=0);
        cout<<result<<endl;
    }

}
