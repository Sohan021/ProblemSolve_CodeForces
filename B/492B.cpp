#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin>>n>>m;
    long long int i, temp=0, maximum=0;
    long long int a[n], b[1000];
    for(i = 0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }


    for(i = 0;i<n-1;i++){
        if(a[i+1]-a[i]>maximum){
            maximum = a[i+1] - a[i];
        }
    }

    double h, k, l;
    h = maximum/2.0;
    k = a[0] - 0.0;
    l = (double)m - a[n-1];
    double result;
    result = max(k, l);
    result = max(result, h);


    cout.precision(10);
    cout<<result;

}
