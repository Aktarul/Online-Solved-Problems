#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    for(int i=0;i<=9;i++){
        cin>>n;
        if(n<=0) cout<<"X["<<i<<"] = 1"<<endl;
        else cout<<"X["<<i<<"] = "<<n<<endl;
    }
    return 0;
}
