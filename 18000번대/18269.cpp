#include<iostream>
using namespace std;

int main()
{
	int n, tot = 0, now = 0;
	bool flag = true; 
	string input, result[10000] = {}; 
	cin >> n; 
	cin >> input; 
	for(int i = 1; i < input.length(); i++)
	{
		flag = true;
		tot = 0; 
		for(int j = 0; j < input.length(); j++)
		{
			result[tot] = input.substr(j, i); 
			tot++; 
		}
		for(int k = 0; k < tot; k++)
		{
			for(int l = 0; l < tot; l++)
			{
				if(k != l)
				{
					if(result[k] == result[l])
						flag = false; 
				}
			}
		}
		if(flag == true)
		{
			now = i; 
			break; 
		}
	} 
	cout << now; 
	return 0; 
}
