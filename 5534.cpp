#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n, all = 0; 
	string need;
	cin >> n;
	cin >> need;
	for(int i = 0; i < n; i++)
	{
		string temp; 
		cin >> temp; 
		for(int j = 1; j < temp.size(); j++)
		{//반복할때 더해지는 수 
			for(int k = 0; k < temp.size(); k++)
			{//어디서 시작하는지  
				bool flag = false;  
				if(j * (need.size() - 1) + k <= temp.size())
				{//배열을 넘어가는가  
					for(int a = 0; a < need.size(); a++)
					{
						if(temp[k + j * a] == need[a])
						{
							flag = true; 
						}
						else
						{
							flag = false; 
							break; 
						}
					}
				}
				if(flag)
				{
					all++;
					goto comehere;
				} 
			}
		}	
		comehere:;
	}
	cout << all; 
	return 0; 
}
