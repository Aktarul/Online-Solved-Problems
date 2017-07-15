#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int x,m=0,n=0;

    cin>>x;

    while(x/3600){
        m++;
        x-=3600;
    }

    while(x/60){
        n++;
        x-=60;
    }

    cout<<m<<":"<<n<<":"<<x<<endl;

    return 0;

}
