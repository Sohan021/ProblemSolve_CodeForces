#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i, l = s.length(), c=0;
    for(i=0;i<l;i++){
        if(s[i] == '4' || s[i] == '7'){
            c++;
        }
    }
    if(c == 7 || c == 4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
