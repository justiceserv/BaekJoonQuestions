#include<stdio.h>

int main()
{
	int i, s[2][3] = {0}, x = 0, y = 0;
	for(i = 0; i < 3; i++)
	{
		scanf("%d %d", &s[0][i], &s[1][i]);
	}
	if(s[0][0] == s[0][1])
		x = s[0][2];
	else if(s[0][0] == s[0][2])
		x = s[0][1];
	else 
		x = s[0][0]; 
	//X Axis Check
	if(s[1][0] == s[1][1])
		y = s[1][2];
	else if(s[1][0] == s[1][2])
		y = s[1][1];
	else
		y = s[1][0];
	printf("%d %d", x, y);
	return 0; 
}
