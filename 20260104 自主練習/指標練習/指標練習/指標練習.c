#include <stdio.h>

// 題目要求的函式原型
// arr: 陣列起始位址
// size: 陣列長度
// max: 指向「最大值變數」的指標
// min: 指向「最小值變數」的指標
void findMaxMin(int arr[], int size, int* max, int* min) {
    // 1. 初始化最大與最小值 (建議設為陣列的第一個元素)
    // 提示：要修改指標指向的變數，記得使用 *max 和 *min

    // TODO: 在這裡寫下你的程式碼

    // 2. 遍歷陣列，更新最大值與最小值
    *max = arr[0];
    *min = arr[0];
    for (size_t i = 1; i < size; i++) {
        if (*max > arr[i]) {
            *max = arr[i];
        }
        else if (*min < arr[i]) {
            *min = arr[i];
        }
    }

}

int main() {
    // 測試資料：模擬一組簡單的數據
    int data[] = { 12, 5, 89, 34, 2, 19, 55 };
    int len = sizeof(data) / sizeof(data[0]);

    int max_val, min_val;

    // 呼叫函式
    // 注意：這裡傳入的是 max_val 和 min_val 的「位址」(&)
    findMaxMin(data, len, &max_val, &min_val);

    printf("陣列內容: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    printf("最大值: %d\n", max_val); // 預期輸出: 89
    printf("最小值: %d\n", min_val); // 預期輸出: 2

    return 0;
}