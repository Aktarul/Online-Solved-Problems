#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c,m;
    cin>>a>>b>>c;

    m=(b*b)-4*a*c;

    if(m<0 || a==0) {
        cout<<"Impossivel calcular"<<endl;
        return 0;
    }

    else{
        cout<<fixed<<setprecision(5)<<"R1 = "<<(-b+sqrt(m))/(2*a)<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<(-b-sqrt(m))/(2*a)<<endl;
    }

    return 0;
}
