#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,z,s=0,cnt=0;
    cin>>x;
    cin>>z;
    while(x>=z){
        cin>>z;
    }

    for(int i=x;!(s>z);i++){
        s+=i;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
