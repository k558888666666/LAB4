#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Size 7
int main()
{
	int face;
	int roll;
	int frequency[Size] = {0};
	srand(time(NULL));
	for ( roll = 1; roll <= 6000; roll++)
	{
		face = 1 + rand() % 6;
		++frequency[face];
	}
	printf("%s%17s\n", "Face", "Frequency");
	for ( face = 1; face < Size; face++)
	{
		printf("%4d%17d\n", face, frequency[face]);
	}

	system("pause");
	return 0;
}