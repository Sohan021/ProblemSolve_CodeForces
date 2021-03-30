#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n, sum=0;
    cin>>n;



    /*for(i=1;i<=n;i++){
        if(i%2==0){
            s1 = s1 + i;
        }
        if(i%2 != 0){
            s2 = s2 + i;
        }
    }*/
    if(n%2==0){
        sum = n/2;
    }
    if(n%2!=0){

        sum= -(n+1)/2;
    }



    cout<<sum;
}
