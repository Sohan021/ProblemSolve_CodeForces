#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[150];
    cin>>s;
    int l = strlen(s);
    sort(s,s+l);
    int c = 0;

    for(int i=0; i<l; i++)
    {
        if(s[i] != s[i+1])
        {
            c++;
        }

    }

    if(c%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

}
