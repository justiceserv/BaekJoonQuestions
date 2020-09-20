#include<iostream>
using namespace std;

int main()
{
	int receptor[52][200] = {0}, all = 0; 
	string cowamai; 
	cin >> cowamai;
	for(int i = 0; i < cowamai.size(); i++)
	{
		receptor[i][cowamai[i]]++; 
	}
	for(int i = 'A'; i <= 'Z'; i++)
	{
		int first = 90, fin = 90;
		for(int j = 0; j < 52; j++)
		{
			if(first == 90 && receptor[j][i] == 1)
				first = j; 
			else if(first != 90 && receptor[j][i] == 1)
				fin = j; 
		}
		int tot = 0; 
		for(int j = 'A'; j <= 'Z'; j++)
		{ 
			for(int k = first; k < fin; k++)
			{
				if(j != i)
					tot += receptor[k][j]; 
			}
			if(tot == 1)
			{
				all++;
			}
			tot = 0; 
		}
	}
	cout << all / 2;
    return 0; 
}
