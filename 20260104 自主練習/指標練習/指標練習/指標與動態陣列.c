#include <stdio.h>
#include <stdlib.h>
int main(void) {
	printf("這場比賽有幾圈?: ");
	int n;
	scanf_s("%d", &n);
	int *ptr = (int*)malloc(n * sizeof(int));
	int* stop = ptr;
	if (ptr == NULL) {
		printf("記憶體不足");
		return 0;
	}
	int max = 0, min = 2147483647;
	for (int i = 0; i < n; i++) {
		printf("\n請輸入第 %d 圈時間: " , i+1 );
		scanf_s("%d", ptr);
		if (*ptr > max) {
			max = *ptr;
		}
		if (*ptr < min) {
			min = *ptr;
		}
		ptr++;
	}
	printf("\n最快單圈為: %d\n最慢單圈為: %d", min, max);
	free(stop);
	return 0;
}