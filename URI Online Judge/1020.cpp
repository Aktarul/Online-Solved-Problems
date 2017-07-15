#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int x,m=0,n=0;

    cin>>x;

    while(x/365){
        m++;
        x-=365;
    }

    cout<<m<<" ano(s)"<<endl;

    while(x/30){
        n++;
        x-=30;
    }

    cout<<n<<" mes(es)"<<endl;
    cout<<x<<" dia(s)"<<endl;

    return 0;

}

