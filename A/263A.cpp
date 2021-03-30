 /// 3 minus for middle point 3 step

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[25][25], i, j, x, y;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1){
                x = i+1;
                y = j+1;
            }
        }
    }
   int ans;
   ans = abs(x-3)+abs(y-3);
   cout<<ans<<endl;
}


