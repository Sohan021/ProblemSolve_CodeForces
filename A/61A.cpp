#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    char c[100];

    cin>>a;
    cin>>b;


    int l1=a.length();
    int l2=b.length();

    for(int i=0;i<l1;i++){
        if(a[i]==b[i]){
            c[i]='0';
        }
        else{
            c[i]='1';
        }
    }
    for(int i=0;i<l1;i++){
        cout<<c[i];
    }
}
