///Numberta prime kina and numberta sqrt kina tailei eta 3 ta nmbr ta bivajjo
#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    int skip=0;
    if(n<2)
        return false;
    else if(n==2)
        return true;
    long long limit=sqrt(n);
    if(n%2==0)
        return false;
        for(int j=3; j<=limit; j+=2){
            if(n%j==0)
                return false;
            }
    return true;
}
int main()
{
    long long num;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>num;
        long long sqr=sqrt(num);
        if(sqr*sqr==num&&isPrime(sqr)==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, c;
    cin>>n;
    long long int i;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        c=0;
        for(int j=1; j<=a[i]; j++)
        {
            if(a[i]%j==0)
            {
                c++;
            }
        }
        if(c == 3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}*/
