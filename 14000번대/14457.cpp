#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n;
	char grid[11][11] = {};
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		string s; 
		cin >> s; 
		for(int j = 0; j < n; j++)
		{
			grid[i][j] = s[j]; 
		}
	} 
	int num = 0;
	for(int i = n -1; i >= 0; i--)
	{
		for(int j = n - 1; j >= 0; j--)
		{
			if(grid[i][j] == '1')
			{
				num++; 
				for(int a = 0; a <= i; a++)
				{
					for(int b = 0; b <= j; b++)
					{
						if(grid[a][b] == '1')
							grid[a][b] = '0'; 
						else
							grid[a][b] = '1'; 
					}
				}
			}
		}
	}
	cout << num; 
	return 0;
}
