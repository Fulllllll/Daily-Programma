#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
using namespace std;

void table2(int n, int** a, int i, int j)
{

	int delta = n / 2;
	if (n == 1)
		return;
	else
	{
		table2(delta, a, i, j);
		table2(delta, a, i + delta, j);
		table2(delta, a, i, j + delta);
		table2(delta, a, i + delta, j + delta);
	}

	for (int x = 0; x < delta; x++)
	{
		for (int y = 0; y < delta; y++)
		{
			a[i + delta + x][j + delta + y] = a[i + x][j + y];
			a[i + x][j + delta + y] = a[i + delta + x][j + y];
		}
	}

}

int a[2][2];
#define N 2
int main()
{

	for (int i = 1; i <= N; i++)
	{
		a[i - 1][0] = i;
	}

	int** arr = (int**)a;
	
	
	//table2(N, arr, 0, 0);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d   ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
