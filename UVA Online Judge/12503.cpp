#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,s=0;
        char val[105];
        cin>>n;

        for(int j=0;j<n;j++){
            char arr[10];
            cin>>arr;

            if(strcmp(arr,"LEFT")==0){
                val[j]=-1;
                s=s+val[j];
            }
            else if(strcmp(arr,"RIGHT")==0){
                val[j]=1;
                s=s+val[j];
            }

            else{
                char temp[10];
                int bb;
                cin>>temp>>bb;
                val[j]=val[bb-1];
                s=s+val[j];
            }
        }
        cout<<s<<endl;
    }
}
