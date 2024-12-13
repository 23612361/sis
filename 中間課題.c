#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[100];
    int up = 0, low = 0, dig = 0;
    int length;
     printf("パスワードを入力してください：");
     fgets(str, sizeof(str), stdin);
     
     /*改行の削除*/
     str[strcspn(str,"\n")] = '\0';
     
     /*文字列の長さの取得*/
     length = strlen(str);
     
     /*8文字以上かの判定*/
     if(length < 8)
     {
     printf("パスワードは８文字未満です\n");
     }
     
     /*各文字のチェック*/
     for(int i = 0; i < length; i++)
     {
         if(isupper(str[i])){
             up = 1;
         }
         else if(islower(str[i])){
             low = 1;
         }
         else if(isdigit(str[i])){
             dig = 1;
         }
     }
     /*条件が満たされてないものを報告*/
     if(!up)
     {
         printf("大文字が含まれていません\n");
     }
     if(!low)
     {
         printf("小文字が含まれていません\n");
     }
     if(!dig)
     {
         printf("数字が含まれていません\n");
     }
     
     if (up && low && dig)
     {
         printf("強力なパスワードです。\n");
     }
     else
     {
         printf("強力なパスワードではありません。\n");
     }
     return 0;
}
