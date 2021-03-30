#include<bits/stdc++.h>

using namespace std;

int main()
{

    int one=0,zero=0, temp=0;

    string a;
    cin>>a;

    int l = a.length();

    for(int i=0; i<l; i++)
    {

        if(a[i]=='0')
        {
            zero++;
            one=0;

        }



        if(a[i]=='1')
        {
            one++;
            zero=0;

        }

        if(one==7 || zero==7)
        {
            temp = 1;
            break;

        }

    }

    if(temp==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
