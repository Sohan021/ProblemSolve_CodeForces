#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    map<string, int> a;
    while(n--){
        cin>>s;
        if(a[s] == 0){
            a[s] = 1;
            cout<<"OK"<<endl;
        }
        /*if(a.count(s)==0){
            cout<<"OK"<<endl;
            a[s]=1;
        }*/
        else{
            cout<<s<<a[s]<<endl;
            a[s]++;
        }
    }


}
