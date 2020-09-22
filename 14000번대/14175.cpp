#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int m, n, k;
	cin >> m >> n >> k; 
	for(int i = 0; i < m; i++)
	{
		string temp; 
		cin >> temp; 
		for(int j = 0; j < k; j++)
		{
			for(int f = 0; f < n; f++)
			{
				for(int a = 0; a < k; a++)
					cout << temp[f]; 
			}
			cout << "\n";
		}
	}
	return 0;
}
