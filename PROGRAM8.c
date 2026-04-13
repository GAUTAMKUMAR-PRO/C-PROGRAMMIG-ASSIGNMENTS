#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("original.txt", "r");
    if(fp1 == NULL)
    {
        printf("File not found!\n");
        return 0;
    }

    fp2 = fopen("updated.txt", "w");

    while((ch = fgetc(fp1)) != EOF)
    {
        if(ch == 'a')
            ch = 'x';

        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    fp1 = fopen("original.txt", "r");
    fp2 = fopen("updated.txt", "r");

    printf("Original File:\n");
    while((ch = fgetc(fp1)) != EOF)
        putchar(ch);

    printf("\nUpdated File:\n");
    while((ch = fgetc(fp2)) != EOF)
        putchar(ch);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
