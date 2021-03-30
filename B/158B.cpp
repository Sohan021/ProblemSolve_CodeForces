#include<bits/stdc++.h>
using namespace std;
int main()
{
    int taxi=0, one=0, two=0, three=0, four=0, group, i;
    cin>>group;
    int stu[group];
    for(i=0; i<group; i++)
    {
        cin>>stu[i];
        if(stu[i]==1)
        {
            one++;
        }
        if(stu[i]==2)
        {
            two++;
        }
        if(stu[i]==3)
        {
            three++;
        }
        if(stu[i]==4)
        {
            four++;
        }
    }
    taxi = taxi+four;
    while(one !=0 && three != 0){
        one = one-1;
        three = three-1;
        taxi = taxi+1;
    }

    if(one == 0 && three != 0){
        taxi=taxi+three;
        three=0;
    }

    taxi = taxi + two/2;

    if(two%2!=0){
        if(one<=2){
            taxi = taxi +1;
            two=0;
            one=0;
        }
        else{
            one=one-2;
            taxi = taxi+1;
            two=0;
        }
    }

    if(one!=0){
        taxi = taxi + one/4;
        if(one%4!=0){
            taxi=taxi+1;
        }
    }
    cout<<taxi;
}
