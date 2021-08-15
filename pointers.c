#include <stdio.h>
#include <stdlib.h>

void zamjena(char* str1, char* str2)
{
    char a[] = "Text1";
    char b[] = "Text2";

    str1 = &b;
    str2 = &a;

    printf("str1 is %s\n", str1);
    printf("str2 is %s\n", str2);
}

int main()
{
    char* str1 = "Text1";
    char* str2 = "Text2";

    zamjena(str1,str2);

    return 0;
}
