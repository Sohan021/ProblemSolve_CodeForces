#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    bool flag = false;
    cin>>n;
    int a[n];
    for(m=0;m<n;m++){
        cin>>a[m];
    }
    for(m=0;m<n;m++){
        if(a[m] == 1){
            flag = true;
        }
    }
    if(flag){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
}
