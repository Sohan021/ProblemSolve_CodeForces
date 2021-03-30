#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int a0 = a+b+c;
    int a1 = max(a0, ((a+b)*c));
    int a2 = max(a0, ((a*b)+c));
    int a3 = max(a0, (a+(b*c)));
    int a4 = max(a0, (a*(b+c)));
    int a5 = max(a0, (a*b*c));


    int mx = a0;
    if (a1 > mx)
        mx = a1;
    if (a2 > mx)
        mx = a2;
    if (a3 > mx)
        mx = a3;
    if (a4 > mx)
        mx = a4;
    if (a5 > mx)
        mx = a5;

    cout <<mx;




}
