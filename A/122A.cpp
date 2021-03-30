#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    cin>>n;

    bool flag=0;

    int a[12]= {4,7,47,74,44,444,447,474,477,777,774,744};

    for(i=0; i<12; i++)
    {
        if(n%a[i]==0)
        {
            flag=true;
        }
    }

    if(flag)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }
}
