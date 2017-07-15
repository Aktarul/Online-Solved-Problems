#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        float a,b,c;
        cin>>a>>b>>c;

        cout<<fixed<<setprecision(1)<<(a*2.0+b*3.0+c*5.0)/10<<endl;
    }
    return 0;
}
