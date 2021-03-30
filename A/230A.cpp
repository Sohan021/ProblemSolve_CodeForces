///Sort kra jhmela
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n, d=0;
    cin>>s>>n;
    bool flag = false;
    int a[n], b[n];
    int i;

    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    if(a[0]>=1000){
        flag = true;
    }
    else{
        if(n==1)
    {
        if(s<=a[0])
        {
            flag = false;
        }
        else
        {
            flag=true;
        }
    }
    if(n>1)
    {
        if(s <= a[0])
        {
            flag = false;
        }
        else
        {
            d = s + b[0];
            for(i=1; i<n; i++)
            {
                if(d>a[i])
                {
                    d = d + b[i];
                    flag = true;
                }

                else
                {
                    flag = false;
                }

            }
        }
    }


    }
    if(flag == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,l,i, count = 0;
    cin>>s>>l;
    pair <int, int> a[1000];

    for(i=0; i<l; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a, a+l);


    for(i=0; i<l; i++)
    {
        if(s<=a[i].first){
            count++;
            break;
        }
        else{
            s = s+a[i].second;
        }
    }

    if(count>0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }


}
