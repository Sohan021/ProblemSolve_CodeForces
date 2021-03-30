#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, o, temp=0, c=0;
    int a[1000];
    ///int b[1000];
    bool flag = true;

    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    cin>>o;

    for(int i=m; i<(m+o); i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<(m+o); i++)
    {
        for(int j=0;j<(m+o);j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0; i<(m+o); i++)
    {
        if(a[i] != a[i+1]){
            c++;
        }
        //cout<<a[i]<<" ";
    }

    if(c == n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }

}
