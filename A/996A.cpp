#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=0, temp=0;
    cin>>n;
    if(n>=100){
        c = c + n/100;
        n = n%100;

    }
    /*cout<<"C-100  "<<c<<endl;
    cout<<"N-100  "<<n<<endl;
    cout<<endl;*/
    if(n>=20){
        c= c + n/20;
        n = n%20;
    }
    /*cout<<"C-20  "<<c<<endl;
    cout<<"N-20  "<<n<<endl;
    cout<<endl;*/
    if(n>=10){
        c = c+n/10;
        n = n%10;
    }
    /*cout<<"C-10  "<<c<<endl;
    cout<<"N-10  "<<n<<endl;
    cout<<endl;*/
    if(n>=5){
        c = c+n/5;
        n = n%5;
    }
    /*cout<<"C-50  "<<c<<endl;
    cout<<"N-50  "<<n<<endl;
    cout<<endl;*/
    if(n<5){
        c =c + n;
    }

    cout<<c<<endl;
}
