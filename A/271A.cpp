#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,a1,b,b1,c,c1,d;
    cin>>n;
    for(;;){
        n++;

        a=n/1000;
        a1=n%1000;
        b=a1/100;
        b1=a1%100;
        c=b1/10;
        c1=b1%10;
        d=c1/1;

        if(a != b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
    }
    cout<<a<<b<<c<<d<<endl;
}
