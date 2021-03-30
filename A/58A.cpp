#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, main="hello";

    int p=0, j=0;

    cin>>s;

    int l = s.length();

    for(int i = 0; i < l; i++)
    {
        if(s[i]==main[j])
        {
            j++;
            p++;
            if(p==5)
                break;
        }
    }

    if(p==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
