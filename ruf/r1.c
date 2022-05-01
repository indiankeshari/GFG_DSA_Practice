#include <stdio.h>

int main()
{
    char string[26], arr[28];
    scanf("%[^\n]s", string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'y' && string[i + 1] == 'o' && string[i + 2] == 'u')
        {
            for (int j = 0; j <= sizeof(string) + 1; j++)
            {
                if (string[j] == 'y' && string[j + 1] == 'o' && string[j + 2] == 'u')
                {
                    arr[j] = 't';
                    arr[j + 1] = 'h';
                    arr[j + 2] = 'e';
                    arr[j + 3] = 'y';
                    arr[j + 4] = ' ';
                    j += 3;
                    goto next;
                }
                else
                {
                    arr[j] = string[j];
                }
                if (0)
                {
                next:
                    for (int x = j; x <= sizeof(string) + 1; x++)
                        arr[x + 1] = string[x];
                    goto end;
                }
            }
        }
    }
end:
    // for (int i = 0; i < sizeof(arr); i++)
    printf("%s\n", arr);

    return 0;
}