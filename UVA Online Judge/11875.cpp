#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    for(int j=1;j<=t;j++){
        int n,m,x;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>m;
            if(((n/2) + 1)==i) x=m;
        }
        cout<<"Case "<<j<<": "<<x<<endl;
    }

    return 0;
}
