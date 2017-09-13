#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[2000];
    int i;

    while(gets(str)){
        for(i=0;i<strlen(str);i++)
            printf("%c",str[i]-7);
            cout<<endl;

    }
    return 0;
}
