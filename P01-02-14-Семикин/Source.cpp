#include <iostream>

void scanMas(int mas[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("mas[%d] - ", i);
		scanf_s("%d", &mas[i]);
	}
}
float Sr(int mas[], int size)
{
	float counter = 0, s = 0;
	for (int i = 0; i < size; i++)
	{
		s += mas[i];
		counter++;
	}
	float sr = s / counter;
	return sr;
}

int F(int mas[], int size, float sr)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] < sr)
			counter++;
	}
	return counter;
}

int main()
{
	const int N = 20;
	int mas[N];

	scanMas(mas, N);
	float sr = Sr(mas, N);
	printf("%.1f\n", sr);
	int total = F(mas, N, sr);
	printf("%d\n", total);

	return 0;	
}