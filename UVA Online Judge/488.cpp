#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int m,n,k;
        cin>>m>>n;

        for(int j=0;j<n;j++){
            for(k=1;k<=m;k++){
                for(int l=1;l<=k;l++)
                    cout<<k;
                cout<<endl;
            }
            for(k=m-1;k>=1;k--){
                for(int l=k;l>=1;l--)
                    cout<<k;
                cout<<endl;
            }
            if(j!=n-1 || i!=x-1) cout<<endl;
        }
    }

    return 0;
}
