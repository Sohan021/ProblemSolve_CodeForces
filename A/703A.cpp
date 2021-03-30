#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n,t1=0,t2=0,m,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m>>c;
		if(m>c){
            t1++;
		}
		else if(m<c){
            t2++;
		}
	}
	if(t1>t2){
        cout<<"Mishka"<<endl;
	}
	else if(t1<t2){
        cout<<"Chris"<<endl;
	}
	else{
        cout<<"Friendship is magic!^^"<<endl;
	}
}

