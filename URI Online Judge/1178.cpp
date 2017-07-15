#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin>>n;

    for(int i=0;i<=99;i++){
        cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<n<<endl;
        n*=0.5;
    }

    return 0;
}

