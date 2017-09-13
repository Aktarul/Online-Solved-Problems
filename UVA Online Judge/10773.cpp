#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){

        double d,v,u,t1,t2;
        cin>>d>>v>>u;

        if(u<=v || u<=0  || v<=0 || d<=0){
            cout<<"Case "<<i+1<<": can't determine"<<endl;
            continue;
        }
        t1=d/u;
        t2=d/(sqrt(u*u-v*v));

        if(t1>t2) cout<<"Case "<<i+1<<": "<<fixed<<setprecision(3)<<t1-t2<<endl;
        else cout<<"Case "<<i+1<<": "<<fixed<<setprecision(3)<<t2-t1<<endl;
    }

    return 0;
}
