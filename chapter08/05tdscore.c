// file: tdscore.c
#include <stdio.h>

// ROWSIZE라는 이름으로 정수 4를, COLSIZE라는 이름으로 정수 2를 나타내는 매크로 상수를 정의하세요
#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	// 합계, 중간 합계, 기말 합계를 저장할 int형 변수 sum, midsum, finalsum을 0으로 초기화하세요
	int sum = 0, midsum = 0, finalsum = 0;

	// 2차원 배열 초기화
	int score[][COLSIZE] = { 95, 85, 90, 88, 86, 90, 88, 78 };

	printf("       중간       기말\n");
	printf("    --------------------\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
		{
			printf("%10d ", score[i][j]);
			sum += score[i][j];
			if (j == 0)
				midsum += score[i][j];
			else
				finalsum += score[i][j];
		}
		puts("");
	}
	
	printf("    --------------------\n");
	printf("평균: %6.2f %10.2f\n", (double)midsum / ROWSIZE, (double)finalsum / ROWSIZE);
	printf("\n성적의 합은 %d이고 ", sum);
	printf("평균은 %.2f이다.\n", (double)sum / (ROWSIZE * COLSIZE));

	return 0;
}
