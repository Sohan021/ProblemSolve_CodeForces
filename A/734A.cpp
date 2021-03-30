#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i, n, c1=0, c2=0;

    cin>>n;
    char s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    for(i=0;i<n;i++){

        if(s[i]=='A'){
            c1++;
        }
        if(s[i]=='D'){
            c2++;
        }

    }

    if(c1>c2){
        cout<<"Anton"<<endl;
    }
    if(c1<c2){
        cout<<"Danik"<<endl;
    }
    if(c2==c1){
        cout<<"Friendship"<<endl;
    }
}
