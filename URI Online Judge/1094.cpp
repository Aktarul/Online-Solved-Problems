#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,trat=0,tr=0,tf=0;

    cin>>t;

    while(t--){
        int x;
        char c;
        cin>>x>>c;
        if(c=='C') tr+=x;
        else if(c=='R') trat+=x;
        else if(c=='S') tf+=x;

    }
    cout<<"Total: "<<tr+trat+tf<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<tr<<endl;
    cout<<"Total de ratos: "<<trat<<endl;
    cout<<"Total de sapos: "<<tf<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<(tr*100.0)/(tr+trat+tf)<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<(trat*100.0)/(tr+trat+tf)<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<(tf*100.0)/(tr+trat+tf)<<" %"<<endl;

    return 0;
}
