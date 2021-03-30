#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number;
    cin>>number;
    int test = number%2;
    if(test == 0 && number != 2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
