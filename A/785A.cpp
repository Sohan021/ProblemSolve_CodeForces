#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    cin>>n;
    int i;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }


    for(i=0;i<n;i++){
        if(s[i]=="Tetrahedron"){
            c = c+4;
        }
        if(s[i]=="Cube"){
            c = c+6;
        }
        if(s[i]=="Octahedron"){
            c = c+8;
        }
        if(s[i]=="Dodecahedron"){
            c = c+12;
        }
        if(s[i]=="Icosahedron"){
            c = c+20;
        }

    }



    cout<<c<<endl;

}
