#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;


    for(int z=1;z<=t;z++){

        int arr[10005];
        int n,m,k,c1=0,c2=0,flag=0;

        cin>>n>>k;
        m=n;

        for(int i=1;i<=n;i++){
            arr[i]=1;
        }

        for(int i=1;;i++){
            if(n==1){
                cout<<"Case "<<z<<": 1"<<endl;
                break;
            }
            if(arr[i]==1) c1++;
            if(c1==k){
                arr[i]=0;
                c1=0;
                m--;
            }

            if(m==1){
                for(int l=1;l<=n;l++){
                    if(arr[l]==1){
                        cout<<"Case "<<z<<": "<<l<<endl;
                        flag=1;
                        break;
                    }

                }
            }
            if(flag==1) break;
            if(i==n) i=0;
        }
    }
}
