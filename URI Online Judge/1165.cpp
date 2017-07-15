#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;

    while(n--){

        bool t=true;
        cin>>m;
        for(int i=2;i<=sqrt(m);i++){
            if(m%i==0) {
                t= false;
                break;
            }
        }
        if(t) cout<<m<<" eh primo"<<endl;
        else cout<<m<<" nao eh primo"<<endl;
    }
}
