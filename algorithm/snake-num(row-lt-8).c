#include<stdio.h>
int main()
{
	int snake[8][8] = { 0 };
	int n = 0;
	scanf("%d",&n);
	int n1 = n;
	int x = 0;
	int y=n-1;
	int count = 1;
	int m = 0;
	while (count <= n1 * n1)
	{
		while (x <= n - 1  )
			snake[x++][y] = count++;
		x--;
		y--;
		while ( y >= m)
			snake[x][y--] = count++;
		y++;
		x--;
		while (x >= m )
			snake[x--][y] = count++;
		n--;
		
		x++;
		y++;
		while ( y <= n - 1)
			snake[x][y++] = count++;
		m++;
		y--;
		x++;
	}
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
			printf("%d\t", snake[i][j]);
		printf("\n");
	}
	return 0;
 } 
