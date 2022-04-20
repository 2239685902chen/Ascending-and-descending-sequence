#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Print()
{
	printf("1.ÉýÐò\n");
	printf("2.½µÐò\n");
	printf("0.ÍË³ö³ÌÐò\n");
}
void Ascending_order(int *w,int e)
{
	int t = 0;
	int y = 0;
	int r = 0;
	int q = 1;
	for (t = 0; t < e - 1; t++)
	{
		for (y = 0; y < e - 1 - t; y++)
		{
			if (w[y] > w[y + 1])
			{
				r = w[y + 1];
				w[y + 1] = w[y];
				w[y] = r;
				q = 0;
			}
		}
		if (q == 1)
		{
			break;
		}
	}
}
void Descending_order(int *w,int e)
{
	int t = 0;
	int y = 0;
	int r = 0;
	int q = 1;
	for (t = 0; t < e - 1; t++)
	{
		for (y = 0; y < e - 1 - t; y++)
		{
			if (w[y] < w[y + 1])
			{
				r = w[y + 1];
				w[y + 1] = w[y];
				w[y] = r;
				q = 0;
			}
		}
		if (q == 1)
		{
			break;
		}
	}
}
void Choice()
{
	int w[] = { 5,8,9,2,4,3,1,6,7 };
	int e = sizeof(w) / sizeof(0);
	int q = 0;
	int r = 0;
	Print();
	printf("ÇëÑ¡Ôñ£º");
	scanf("%d", &q);
	switch (q)
	{
	case 1:
		Ascending_order(w,e);
		for (r = 0; r < 9; r++)
		{
			printf("%d ", w[r]);
		}
		printf("\n");
		break;
	case 2:
		Descending_order(w,e);
		for (r = 0; r < 9; r++)
		{
			printf("%d ", w[r]);
		}
		printf("\n");
		break;
	case 0:
		printf("ÍË³ö³ÌÐò\n");
		break;
	default:
		printf("ÊäÈë´íÎó;\n");
		Choice();
		break;
	}
}
int main()
{
	Choice();
	return 0;
}