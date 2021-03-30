#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t1, t2, t3, t4;
    cin>>n;
    long long a[n];
    long long i, j;
    long long b[n], c[n];

    for(i=0;i<n;i++){
        cin>>b[i]>>c[i];
    }

    for(i=0;i<n;i++){
            if(b[i]<c[i]){
                a[i] = c[i] - b[i];
            }
            if(b[i] == c[i]){
                a[i] = 0;
            }
            if(b[i]>c[i]){
                if(b[i]%c[i] != 0){

                     ///t1 = b[i]%c[i];
                     t2 = b[i]/c[i];
                     t3 = c[i]*(t2+1);
                     t4 = t3-b[i];
                     a[i]=t4;
                     ///cout<<"t3- "<<t3<<" "<<endl;
                }
                if(b[i]%c[i] == 0){
                    a[i]=0;
                }


            }
    }

    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
