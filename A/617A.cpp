#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c=0;

    cin>>n;
    int j= n+1;
    while(j--)
    {

        if(n>=5)
        {
            c=c + n/5;
            n=n%5;

        }

        else if(n>=4)
        {
            c=c + n/4;
            n=n%4;

        }

        else if(n>=3)
        {
            c=c + n/3;
            n=n%3;


        }
        else if(n>=2)
        {
            c=c + n/2;
            n=n%2;


        }
        else
        {
            c=c + n/1;
            n=n%1;

        }
    }

    cout<<c<<endl;



}

/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c=0;

    cin>>n;
int j= n+1;
    while(j--)
    {
        cout<<n<<endl;
        cout<<endl;
        if(n>=5)
        {
            c=c + n/5;
            n=n%5;
            cout<<"Step1"<<endl;
            cout<<"N-"<<n<<endl;
            cout<<"C-"<<c<<endl;
            cout<<endl;
        }

        else if(n>=4)
        {
            c=c + n/4;
            n=n%4;
            cout<<"Step2"<<endl;
            cout<<"N-"<<n<<endl;
            cout<<"C-"<<c<<endl;
            cout<<endl;
        }

        else if(n>=3)
        {
            c=c + n/3;
            n=n%3;
            cout<<"Step3"<<endl;
            cout<<"N-"<<n<<endl;
            cout<<"C-"<<c<<endl;
            cout<<endl;

        }
        else if(n>=2)
        {
            c=c + n/2;
            n=n%2;
            cout<<"Step4"<<endl;
            cout<<"N-"<<n<<endl;
            cout<<"C-"<<c<<endl;
            cout<<endl;

        }
        else
        {
            c=c + n/1;
            n=n%1;
            cout<<"Step5"<<endl;
            cout<<"N-"<<n<<endl;
            cout<<"C-"<<c<<endl;
            cout<<endl;
        }
    }

    cout<<"Total:="<<c<<endl;



}

*/
