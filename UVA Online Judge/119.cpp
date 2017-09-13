#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)){

        char arr[100][150],temp[150];
        long  long int tk,num,tka[11];

        for(int i=0;i<n;i++){
            cin>>arr[i];
            tka[i]=0;
        }

        for(int i=0;i<n;i++){

            cin>>temp>>tk>>num;

            for(int j=0;j<n;j++){
                if(strcmp(temp,arr[j])==0 && num != 0 ){
                    tka[j]=tka[j] - tk + (tk%num);
                }
            }

            for(int j=0;j<num;j++){
                cin>>temp;
                for(int k=0;k<n;k++){
                    if(strcmp(temp,arr[k])==0){
                        tka[k]=tka[k] + tk/num;
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<tka[i]<<endl;
        }

        cout<<endl;
    }

    return 0;
}
