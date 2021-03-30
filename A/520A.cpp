#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, c=0;
    cin>>n;
    char s[n];
    int i;
    bool flag = true;
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    if(n<26)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            s[i] = tolower(s[i]);
        }
        for(i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if(s[j]>s[j+1])
                {
                    temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            if(s[i] !=s[i+1])
            {
                c++;
            }
        }
        if(c == 26)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}


