#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters=0, spaces=0, tabs=0, lines=0;

    fp = fopen("data.txt", "w");
    if(fp == NULL)
    {
        printf("File cannot be created!\n");
        return 0;
    }

    printf("Enter text (Press EOF Ctrl+Z to stop):\n");
    while((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fclose(fp);

    fp = fopen("data.txt", "r");
    if(fp == NULL)
    {
        printf("File cannot be opened!\n");
        return 0;
    }

    printf("\nFile content:\n");
    while((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
        characters++;

        if(ch == ' ')
            spaces++;
        else if(ch == '\t')
            tabs++;
        else if(ch == '\n')
            lines++;
    }

    fclose(fp);

    printf("\nCharacters = %d", characters);
    printf("\nSpaces = %d", spaces);
    printf("\nTabs = %d", tabs);
    printf("\nLines = %d\n", lines);

    return 0;
}
