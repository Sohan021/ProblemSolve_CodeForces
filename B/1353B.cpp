#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    int a[101],b[101];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        ///choto theke boro
        sort(a,a+n);
        ///boro theke choto
        ///sort(b,b+n,greater<int>());
        sort(b, b+n);
        reverse(b, b+n);

        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                if(b[j] > a[j]){
                    swap(a[j],b[j]);
                    break;
                }
            }
        }
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}
