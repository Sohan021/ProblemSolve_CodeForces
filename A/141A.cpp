#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3, s4;
    cin>>s1>>s2>>s3;
    int l1, l2, l3, temp;
    int i;
    l1 = s1.length();
    l2 = s2.length();
    l3 = s3.length();
    s4 = s1+s2;
    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());
    /*
    for(i=0;i<l1+l2;i++){
        for(int j=0;j<l1+l2-1;j++){
            if(s4[j]>s4[j+1]){

                temp = s4[j];

                s4[j] = s4[j+1];

                s4[j+1] = temp;
            }
        }

    }
    for(i=0;i<l3;i++){
        for(int j=0;j<l1+l2-1;j++){
            if(s3[j]>s3[j+1]){

                temp = s3[j];

                s3[j] = s3[j+1];

                s3[j+1] = temp;
            }
        }

    }
    */
    if(s3 == s4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
