#include <stdio.h>

// 函式：計算超過 limit 速度的次數
// data_start: 陣列的第一個位址
// size: 數據總數
// limit: 速限
int countOverspeed(int* ptr, int size, int limit) {
    int count = 0;

    // TODO: 寫一個迴圈
    // 條件：使用指標算術遍歷陣列
    // 提示：你可以用 ptr++ 讓指標指想下一個格子，然後用 *ptr 取值
    for (size_t i = 0; i < size; i++) {
        if (*ptr > limit) {
            count++;
        }
        *ptr++;
    }
    return count;
}

int main() {
    // 模擬一段 Monza 賽道的大直線速度數據 (km/h)
    int telemetry[] = { 180, 220, 295, 301, 280, 150, 210 };
    int len = sizeof(telemetry) / sizeof(telemetry[0]);
    int speed_limit = 250;

    int violations = countOverspeed(telemetry, len, speed_limit);

    printf("速度數據: ");
    for (int i = 0; i < len; i++) printf("%d ", telemetry[i]);
    printf("\n");

    printf("速限: %d km/h\n", speed_limit);
    printf("超速次數: %d\n", violations); // 預期輸出: 3 (295, 301, 280)

    return 0;
}