#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,s=0;

    while(scanf("%d:%d",&n,&m)){
        s=0;
        if((n==7 && m>0) || (n>7)){
            s=(n-7)*60 + m;
        }

        cout<<"Atraso maximo: "<<s<<endl;
    }

    return 0;
}
