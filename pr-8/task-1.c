#include<stdio.h>

void main()
{
    char string[100];
    char *ptr = string;
    int lenth = 0;

    printf("Enter any string:-");
    scanf("%[^\n]",&string); 

    while(*ptr !='\0')
    {
        lenth++;
        ptr++;
    }
    printf("\nThe length of string is : %d \n",lenth);

}