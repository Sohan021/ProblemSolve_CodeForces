#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z, n, sumx=0, sumy=0, sumz=0;

    cin>>n;

    while(n--)
    {
        cin>>x>>y>>z;

        sumx = sumx+x;
        sumy = sumy+y;
        sumz = sumz+z;
    }


    if(sumx==0 && sumy ==0 && sumz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3];
    int n,x=0,y=0,z=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            //x = x + a[j][i];
            cout<<j<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            x = x + a[j][i];
            y = y + a[j+1][i];
            z = z + a[j+2][i];
        }
    }
    cout<<x<<" "<<y<<" "<<z<<endl;

}*/
