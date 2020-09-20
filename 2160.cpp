#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n, chai[50][50] = {0};
	string gurim[50][5] = {}; 
	cin >> n; 
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 5; j++)
			cin >> gurim[i][j]; 
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != j)
			{
				for(int k = 0; k < 5; k++)
				{
					string temp1 = gurim[i][k], temp2 = gurim[j][k]; 
					for(int a = 0; a < 7; a++)
					{
						if(temp1[a] != temp2[a])
							chai[i][j]++; 
					}
				}
			}
		}
	}
	int minval1 = 99999, minval2 = 99999, curr_min = 99999999; 
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != j && curr_min > chai[i][j])
			{
				minval1 = i; 
				minval2 = j;
				curr_min = chai[i][j];
			}
		}
	}
	cout << minval1 + 1 << " " << minval2 + 1; 
	return 0;
}
