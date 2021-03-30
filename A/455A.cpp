#include<bits/stdc++.h>
typedef long long int ln;

ln dp[100005] = {0};
ln dp1[100005];
using namespace std;
/*ln bor(const int i)
{
    if(i==0){
        return 0;
    }
    if(i==1){
        return dp[1];
    }

    return max(bor(i-1), bor(i-2)+i*dp[i]);
}*/

int main()
{
    long long int a, i, b, m=0;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>b;
        dp[b]++;
    }
    dp1[0] = 0;
    dp1[1] = dp[1];

    for(i=2;i<=100005;i++){
        dp1[i] = max(dp1[i-1], dp1[i-2]+i*dp[i]);
    }
    cout<<dp1[100000];

}
