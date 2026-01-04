#include <stdio.h>
void print_paska_triangel(int rows)
{     printf("Enter the number of levels: %d\n", rows);
     for (int i = 0; i <= rows ; i++)
     {
         for (int space = 1; space <= rows - i; space++)
         {
             printf("  ");
         }
         long long val = 1;
         for (int j = 0; j <= i; j++)
         {
             // 1. 先印出目前的數字，統一使用 %4lld 確保空格對齊
             printf("%-4lld", val);

             // 2. 印完後，立刻計算「下一個」位置要用的數字
             // 注意：這裡的公式與你之前的略有不同，這是為了配合「印完再算」
             val = val * (i - j) / (j + 1);

         }
         printf("\n");
     }
}
int main()
{
   int a;
   scanf_s("%d",&a);
   print_paska_triangel(a);
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
