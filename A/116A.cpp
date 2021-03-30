#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, ex=0, en=0, sum=0, cap=0;

    cin>>n;

    while(n--)
    {
        cin>>ex>>en;
        sum = sum - ex;
        sum = sum + en;
        ///once cap = max never down
        cap = max(cap, sum);
    }

    cout<<cap<<endl;


}
