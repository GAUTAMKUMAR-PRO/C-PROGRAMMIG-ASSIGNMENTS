#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1, *fp2;
    char str[100];

    printf("Enter a string: ");
    gets(str);

    fp1 = fopen("greencity.txt", "w");
    fputs(str, fp1);
    fclose(fp1);

    fp2 = fopen("cleancity.txt", "w");

    for(int i=strlen(str)-1; i>=0; i--)
        fputc(str[i], fp2);

    fclose(fp2);

    fp1 = fopen("greencity.txt", "r");
    fp2 = fopen("cleancity.txt", "r");

    printf("\nGreencity File:\n");
    while(fgets(str, 100, fp1) != NULL)
        printf("%s", str);

    printf("\nCleancity File:\n");
    while(fgets(str, 100, fp2) != NULL)
        printf("%s", str);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
