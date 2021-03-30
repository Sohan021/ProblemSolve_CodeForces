#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, a[5], s=0, c=0;

    cin>>n;

    while(n--){
        for(i=0;i<3;i++){
            cin>>a[i];
        }
        s = 0;
        for(i=0;i<3;i++){
            if(a[i]==1)
                s++;
        }
        if(s>=2){
            c++;
        }
    }

     cout<<c<<endl;
}
