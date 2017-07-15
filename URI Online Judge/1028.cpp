#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n1,n2,i,temp;
    cin>>t;
    while(t--){
        cin>>n1>>n2;
        if(n1>n2) swap(n1,n2);
        for(i=n1;i>0;){
            if(!(n2%i))break;
            temp=i;
            i=n2%i;
            n2=temp;
        }
        cout<<i<<endl;
    }
    return 0;
}
