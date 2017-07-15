#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin>>c;
    double arr[13][13];

    for(int i=0;i<=11;i++){
        for(int j=0;j<=11;j++)
            cin>>arr[i][j];
    }

    double s=0;

    for(int i=0;i<=5;i++){
        for(int j=12-i;j<=11;j++){
            s+=arr[i][j];
        }
    }

    for(int i=6;i<=11;i++){
        for(int j=i+1;j<=11;j++){
            s+=arr[i][j];
        }
    }

    if(c=='S') cout<<fixed<<setprecision(1)<<s<<endl;
    else cout<<fixed<<setprecision(1)<<s/30<<endl;

    return 0;
}
