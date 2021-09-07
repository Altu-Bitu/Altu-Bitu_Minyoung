//백준13458

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N; //시험장 개수
	scanf_s("%d", &N);

	int* A;
	A = (int*)malloc(sizeof(int) * N); //시험장 배열
	
	for (int i = 0; i < N; i++) { //각 시험장 응시자 수 입력
		scanf_s("%d", &A[i]);
	}

	int B, C; //총 감독관 응시자 수, 부감독관 응시자 수
	scanf_s("%d %d", &B, &C);

	long long x;
	long long sum = N;
	for (int j = 0; j < N; j++) { //각 시험장 응시자 수 입력
		x = (A[j] - B) / C;
		if (((A[j] - B) % C) > 0) x++;
		sum += x;
	}
	printf("%d", sum);

	free(A);
	return 0;
}
