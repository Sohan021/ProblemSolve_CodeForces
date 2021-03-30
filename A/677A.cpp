#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, c=0;
    cin>>n>>h;
    int a;
    int i;
    for(i=0;i<n;i++){
        cin>>a;
        if(a<=h){
            c = c+1;
        }
        if(a>h){
            c = c+2;
        }
    }
    cout<<c<<endl;
}
