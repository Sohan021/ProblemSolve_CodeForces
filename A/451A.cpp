#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, r;
    cin>>n>>m;

    if(n>m){
        r=m;
    }
    else{
        r=n;
    }
    ///Jeta age sesh hbe seta 2 dia vag kra gelei slved
    if(r%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
}
