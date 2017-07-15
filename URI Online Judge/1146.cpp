#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,i;
    cin>>x;

    while(x){
        for(i=1;i<=x;i++){
            cout<<i;
            if(i==x) cout<<endl;
            else cout<<" ";

        }
        cin>>x;
    }
}
