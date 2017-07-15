#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[102],k,n;

    cin>>n;
    while(n){
        for(int k=1;;k++){
            int m,c1=0,c2=0,flag=0,flag2=0;

            m=n-1;

            for(int i=1;i<=n;i++){
                arr[i]=1;
            }

            arr[1]=0;
            for(int i=2;;i++){

                if(arr[i]==1) c1++;
                if(c1==k){
                    arr[i]=0;
                    c1=0;
                    m--;
                }

                if(m==1){
                    for(int l=1;l<=n;l++){
                        if(arr[l]==1){
                            if(l==13) flag2=1;
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==1) break;
                if(i==n) i=0;
            }
            if(flag2){
                cout<<k<<endl;
                break;
            }
        }
        cin>>n;
    }
}
