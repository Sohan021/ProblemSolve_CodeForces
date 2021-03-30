#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k, l, m, n, d, c=0;

    cin>>k>>l>>m>>n>>d;

    int a[100];

    for(int i=1;i<=d;i++){

        if(i%k==0)
            continue;
        if(i%l==0)
            continue;
        if(i%m==0)
            continue;
        if(i%n==0)
            continue;
        else{
            c++;
        }

    }
    cout<<d-c;

}
