#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, s3;

    cin>>s1>>s2;

    int i, l1, l2;

    l1 = s1.length();

    for(i = l1-1 ; i>=0; i--)
    {
        s3+=s1[i];
    }
    if(s3==s2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
