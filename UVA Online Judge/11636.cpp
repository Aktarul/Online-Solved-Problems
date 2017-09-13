#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j;
    cin>>n;

    for(j=0;n>=0;j++){

        if(n==0 || n==1){
            cout<<"Case "<<j+1<<": 0"<<endl;
        }

        else {
            int cnt=0,i;

            for(i=1;i<n;){
                i*=2;
                cnt++;
            }
            cout<<"Case "<<j+1<<": "<<cnt<<endl;
        }

        cin>>n;
    }

    return 0;
}
