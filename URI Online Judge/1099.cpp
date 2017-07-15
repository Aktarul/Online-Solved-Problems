#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,i,n[2],s=0;
    cin>>m;
    for(int j=0;j<m;j++){
        s=0;
        cin>>n[0]>>n[1];

        if(n[1]<n[0]) swap(n[0],n[1]);

        for(i=n[0]+1;i<n[1];i++){
            if(i%2==1 || i%2==-1){
                s+=i;
            }
        }

        cout<<s<<endl;
    }

    return 0;
}

