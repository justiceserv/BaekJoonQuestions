#include<stdio.h>

int main()
{
	char s[1000][20]; 
	int n, a[1000];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d %s", &a[i], &s[i]);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			if(s[i][j] != '\0')
			{
				for(int k = 0; k < a[i]; k++)
				{
					printf("%c", s[i][j]);
				}
			}
			else
			{
				break;
			}
		}
		if(i != n-1)
		{
			printf("\n");
		}
	}
	return 0; 
} 
