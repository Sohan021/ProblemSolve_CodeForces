#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001];
    gets(s);
    int l=strlen(s);
    int i, j=0, k;
    sort(s, s+l);
    for(i=0;i<l-1;i++){

        if( s[i]>=97 && s[i]<=122 ){

            j++;

            if(s[i]==s[i+1]){
                j--;
            }
        }

    }
    cout<<j<<endl;
}
