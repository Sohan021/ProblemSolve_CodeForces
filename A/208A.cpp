#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool f=1;
    int l = s.length();
    int i;
    for(i=0;i<l;i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
           i+=2;
           if(!f){
            cout<<" ";
           }
           continue;
        }
        else{
            f=0;
            cout<<s[i];
        }
    }
}
