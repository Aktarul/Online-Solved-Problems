#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int i,j;

    char arr[10000];

    FG:

    i=0;

    while(scanf("%c",&arr[i])==1 ){

        if(arr[i]==' ') {
            for(j=i-1;j>=0;j--)
                cout<<arr[j];
            cout<<" ";
            goto FG;
        }
        if(arr[i]=='\n'){

            for(j=i-1;j>=0;j--)
                cout<<arr[j];
            cout<<endl;

            goto FG;

        }
        i++;
    }

    return 0;
}
