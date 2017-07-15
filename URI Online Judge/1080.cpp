#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,maxi=0,temp;

    for(i=0;i<100;i++){

        cin>>n;
        if(n>maxi){
            maxi=n;
            temp=i+1;
        }
    }

    cout<<maxi<<endl<<temp<<endl;

    return 0;
}
