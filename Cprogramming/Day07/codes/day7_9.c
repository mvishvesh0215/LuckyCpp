// dynamic memory allocation
// malloc

#include<stdio.h>
#include<stdlib.h>

int main()
{
    
     int *ptr = (int *) malloc(sizeof(int));

     *ptr = 25;

     printf("*ptr = %d\n",*ptr); // 25

     int *ptr2 =   malloc(sizeof(int) * 5);

     printf("Enter the 5 int elements :");

     for(int i=0;i<5;i++)
     {
        scanf("%d",&ptr2[i]);
     }

     printf("The values are :\n");
     for(int i =0;i<5;i++)
     {
        printf("%4d",ptr2[i]);
     }

     free(ptr); // to avoid memory leakage
     ptr = NULL; // to avoid dangling pointer

     free(ptr2);
     ptr2 = NULL;
    return 0;   
}