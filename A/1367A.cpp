#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int l;
    while(n--){
        string s, t;
        cin>>s;

        l = s.length();

        for(int i=0;i<l-1;i++){
            if(i == 0){
                t += s[i];
            }
            if(s[i] == s[i-1]){
                t += s[i];
                i++;
            }
        }
        t += s[l-1];
        cout<<t<<endl;
    }

}
