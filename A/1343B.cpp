#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, i;
        cin>>a;
        int sum1=0, sum2=0;
        vector<int> num;
        if(a%2==0){
            if(a%4==0){
                cout<<"YES"<<endl;
                num.push_back(2);
                for(i=1;i<=a;i++){
                    if(i%2==0){
                        num.push_back(i);
                        sum2 = sum2 + i;
                    }
                }
                for(i=1;i<=a;i++){
                    if(i%2!=0){
                        num.push_back(i);
                        sum1 +=i;
                    }
                }

                int c = sum2 - sum1;
                int x = num.back();
                num.back() = x+c;
                for(i=1;i<=a;i++){
                    cout<<num[i]<<" ";
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
