#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        vector<int> m;
        int n, ans, count=0;
        cin>>n;
        if(n%10!=0){
            m.push_back(n%10);
        }
        ans = n%10;
        n = n-ans;


        if(n%100!=0){
            m.push_back(n%100);
        }
        ans = n%100;
        n = n-ans;


        if(n%1000!=0){
            m.push_back(n%1000);
        }
        ans = n%1000;
        n = n - ans;


        if(n%10000!=0){
            m.push_back(n%10000);
        }

        if(n>=10000 && n%10000==0){
            m.push_back(n);
        }

        cout<<m.size()<<endl;

        for(int i=0;i<m.size();i++){
            cout<<m[i]<<" ";
        }
    }
}
