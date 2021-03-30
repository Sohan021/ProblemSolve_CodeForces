#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, l;
    cin>>s;
    bool flag=0;
    l= s.length();

    for(i=0;i<l;i++){
        if(s[i]== 'H' || s[i] == 'Q' || s[i] == '9'){
            flag = 1;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
