#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, temp=0, sum=0, sum2=0;
    int a[100];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j]= temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }

    for(i=0; i<n; i++)
    {
        sum2 = sum2 + a[i];
        if(sum2 > sum/2){
            break;
        }
    }
    cout<<i+1;
}
