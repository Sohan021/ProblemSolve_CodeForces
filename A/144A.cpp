#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, minimum, maximum, temp=0, c1=0, c2=0, k=0, store1=0, store2=0;
    int result;
    cin>>n;
    int a[n];
    int b[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        b[i]=a[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    maximum = a[n-1];
    minimum = a[0];

    for(i=0; i<n; i++)
    {
        if(b[i] == a[n-1])
        {
            c1 = i;
            store1=i;
        }
        if(b[i] == a[0])
        {
            c2 = (n-1) - i;
            store2 = i;
        }


    }

    /*for(i=n-1; i>=0; i--)
    {

        if( a[0]==b[i] )
        {
            k++;

        }
        c2 = k;
        cout<<c[i]<<" ";

    }*/
    ///cout<<endl;
    ///cout<<endl;

    ///cout<<"Max:"<<maximum<<endl;
    ///cout<<"Min:"<<minimum<<endl;

    ///cout<<endl;
    ///cout<<"Store1:"<<store1<<endl;
    ///cout<<"Store2:"<<store2<<endl;

    ///cout<<endl;
    ///cout<<"C1-- "<<c1<<endl;
    ///mcout<<"C2-- "<<c2<<endl;

    if(store1>store2)
    {
        result = c1+c2-1;
    }
    else
    {
        result = c1+c2;
    }


    cout<<result<<endl;


}
