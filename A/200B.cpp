#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a, b[100], sum=0;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>b[i];
    }
    for(int i=1;i<=a;i++){
        sum = sum+b[i];
    }

    float result = (sum/(a*100))*100;
    cout<<setprecision(11)<<result<<endl;
}
