#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][50];
    char *ptr[5];
    char temp[50];

    printf("Enter 5 strings:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%s", str[i]);
        ptr[i] = str[i];
    }

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(strcmp(ptr[i], ptr[j]) > 0)
            {
                strcpy(temp, ptr[i]);
                strcpy(ptr[i], ptr[j]);
                strcpy(ptr[j], temp);
            }
        }
    }

    printf("\nSorted strings:\n");
    for(int i=0; i<5; i++)
        printf("%s\n", ptr[i]);

    return 0;
}
