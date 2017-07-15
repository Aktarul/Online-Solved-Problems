
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;

    while(n--){

        cin>>m;
        int s=0;

        for(int i=1;i<m;i++){
            if(m%i==0) s+=i;
        }
        if(s==m) cout<<m<<" eh perfeito"<<endl;
        else cout<<m<<" nao eh perfeito"<<endl;
    }
    return 0;
}
