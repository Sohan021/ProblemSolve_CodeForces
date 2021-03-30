#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100], temp;
    int n,m, i;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    while(m--)
    {
        for(i=0; i<n-1; i++)
        {

            if(s[i]=='B' && s[i+1]=='G')
            {
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                i++;
            }
        }

    }

    for(i=0; i<n; i++)
    {
        cout<<s[i];
    }
}
