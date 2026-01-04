#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int RollDice(){
    return ((rand() % 6) + 1);
}
int countOccurance(int target, size_t total) {
    int count = 0;
    for (size_t i = 0; i < total; i++){
        int sum = RollDice() + RollDice();
        if (sum == target) {
            count++;
        }
    }
    return count;
}
int main()
{
    srand((unsigned int)time(NULL));
    const size_t total_rolls = 10000;
    int targets[] = { 6, 7, 8 };
    int numTargets = sizeof(targets) / sizeof(targets[0]);
    for (int i = 0; i < numTargets; i++) {
            int target = targets[i];
            int count = countOccurance(target, total_rolls);
            double probability = (double)count / total_rolls;
            printf("擲 %zu 次兩個骰子和 %d 的機率為 %.3f\n", total_rolls, target, probability);
    }
    return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
