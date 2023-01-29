#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <assert.h>



int main (void)
{
    char text [20];
    setlocale(LC_ALL, "ru_RU.utf8");
    printf("Это текст на русском\n");
    scanf("%s", &text);
    printf("\n%s", text);
    return 0;
}