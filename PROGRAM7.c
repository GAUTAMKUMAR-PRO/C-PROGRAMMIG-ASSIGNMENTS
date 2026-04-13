#include <stdio.h>

int main()
{
    FILE *fs, *ft;
    char ch;

    fs = fopen("source.txt", "r");
    if(fs == NULL)
    {
        printf("Error: Source file does not exist!\n");
        return 0;
    }

    ft = fopen("target.txt", "w");

    while((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, ft);
    }

    fclose(fs);
    fclose(ft);

    printf("File copied successfully!\n");

    return 0;
}
