#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, r;

    cin>>s;

    int i, c=0;
    float  l = s.length();
    float middle = l/2;
    for(i=0; i<l; i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            c++;
        }
    }
    //cout<<"c-"<<c<<endl;
    //cout<<"M-"<<middle<<endl;
    if(c>=middle)
    {
        for(i=0; i<l; i++)
        {
            r+=towlower(s[i]);
        }

    }
    else
    {
        for(i=0; i<l; i++)
        {
            r+=towupper(s[i]);
        }
    }
    cout<<r<<endl;

}
