#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    int c = 0, n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    for(int i=0; i<n; i++)
    {
        if(s[i] == s[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
}
