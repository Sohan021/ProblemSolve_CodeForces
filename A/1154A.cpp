#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c[4], a, b, d;

    for(int i=0;i<4;i++){
        cin>>c[i];
    }

    sort(c, c+4);

    a = c[3] - c[0];
    b = c[3] - c[1];
    d = c[3] - c[2];

    cout<<a<<" "<<b<<" "<<d<<endl;
}
