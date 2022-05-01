#include <stdio.h>

void dlt(char *a, char b)
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b)
            printf("%c", a[i]);
    }
}

int main()
{
    char a[100], b;
    scanf("%s %c", a, &b);
    dlt(a, b);

    return 0;
}