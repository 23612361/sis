#include <stdio.h>

int main()
{
    int diff;
    char large;
    char small;
    
    printf("アルファベットを入力してください");
    scanf("%c", &small);
    diff = 'A' - 'a';
    large = small + diff;
    printf("大文字%c 小文字%c\n", large, small);

    return 0;
}