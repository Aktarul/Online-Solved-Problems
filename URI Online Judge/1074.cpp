#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    cin>>m;



    for(int i=0;i<m;i++){
        cin>>n;
        if(n%2==0 && n>0) cout<<"EVEN POSITIVE"<<endl;

        else if(n%2==0 && n<0) cout<<"EVEN NEGATIVE"<<endl;

        else if(n%2==1) cout<<"ODD POSITIVE"<<endl;
        else if(n%2==-1) cout<<"ODD NEGATIVE"<<endl;

        else cout<<"NULL"<<endl;
    }

    return 0;
}
