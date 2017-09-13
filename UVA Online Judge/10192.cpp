#include <bits/stdc++.h>
using namespace std;
int arrow[1000][1000];
int ara[1000][1000];

void lcs(char fst[], char scnd[])
{
	int len = strlen(fst);
	int len1 = strlen(scnd);

	for(int i = 0; i <= len; i++)
		ara[i][0]=0;
	for(int i = 0; i <= len; i++)
		ara[0][i]=0;
	for(int i = 1; i <= len; i++)
	{
		for(int j = 1; j <= len1; j++)
		{
			if(fst[i-1] == scnd[j-1])
			{
				ara[i][j]=ara[i-1][j-1]+1;
				arrow[i][j]=1;
			}
			else if(ara[i-1][j] >= ara[i][j-1])
			{
				ara[i][j]=ara[i-1][j];
				arrow[i][j]=2;
			}
			else if(ara[i][j-1] > ara[i-1][j])
			{
				ara[i][j]=ara[i][j-1];
				arrow[i][j]=3;
			}
		}
	}


}
int main()
{
	char fst[1000],scnd[1000];

    for(int i=1;;i++){
        gets(fst);

        if(strcmp(fst,"#")==0) return 0;

        gets(scnd);

        lcs(fst,scnd);

        int len = strlen(fst);
        int len1 = strlen(scnd);

        printf("Case #%d: you can visit at most %d cities.\n",i,ara[len][len1]);
    }

	return 0;
}


