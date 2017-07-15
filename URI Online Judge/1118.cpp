#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;

    while(t==1){
        float a,b;

        cin>>a;
        while(a>10.0 || a<0 ) {
            cout<<"nota invalida"<<endl;
            cin>>a;
        }
        cin>>b;
        while(b>10.0 || b<0 ) {
            cout<<"nota invalida"<<endl;
            cin>>b;
        }

        cout<<fixed<<setprecision(2)<<"media = "<<(a+b)/2.0<<endl;

        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>t;
        while(t>2 || t<1) {
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>t;
        }

    }
}
