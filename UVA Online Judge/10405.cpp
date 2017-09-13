#include <bits/stdc++.h>
using namespace std;
int arrow[1000][1000];
int ara[1000][1000];

void lcs(string fst, string scnd)
{
	int len = fst.size();
	int len1 = scnd.size();
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

	printf("%d\n",ara[len][len1]);
}
int main()
{
	string fst,scnd;


	while(getline(cin,fst) ){
        getline(cin,scnd);
        lcs(fst,scnd);
	}

	return 0;
}

