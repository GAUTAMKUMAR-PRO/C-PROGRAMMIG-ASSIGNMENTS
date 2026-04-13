#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int num, rev = 0, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    fp1 = fopen("number.txt", "w");
    if(fp1 == NULL)
    {
        printf("Error creating file!\n");
        return 0;
    }
    fprintf(fp1, "%d", num);
    fclose(fp1);

    
    fp1 = fopen("number.txt", "r");
    if(fp1 == NULL)
    {
        printf("Error opening file!\n");
        return 0;
    }
    fscanf(fp1, "%d", &temp);
    fclose(fp1);


    int original = temp;
    while(temp != 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

  
    fp2 = fopen("reverse.txt", "w");
    if(fp2 == NULL)
    {
        printf("Error creating reverse file!\n");
        return 0;
    }
    fprintf(fp2, "%d", rev);
    fclose(fp2);

    
    printf("\nNumber stored in file: %d", original);
    printf("\nReverse stored in reverse.txt: %d\n", rev);

    return 0;
}
