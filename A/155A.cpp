#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, c=0;
    cin>>a;
    int b[a];
    int i;
    for(i=0;i<a;i++){
        cin>>b[i];
    }

    int max = b[0];
    int min = b[0];

    for(int i=0;i<a;i++){
        if(b[i]>max){
            max = b[i];
            c++;
        }
        if(b[i]<min){
            min = b[i];
            c++;
        }
    }

    cout<<c<<endl;
}
