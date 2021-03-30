#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, temp=0, c=0;

    int a[4];
    for(i=0;i<4;i++){
        cin>>a[i];
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<4;i++){
        if(a[i] == a[i+1]){
             c++;
        }

    }
    cout<<c;
}
