// printf, scanf return value

#include<stdio.h>

int main()
{
    int count;
    count = printf("Hello !");
    printf("\n count = %d\n",count); // 7

    int num1 = 20;
    count = printf("%d",num1);  // 20
    printf("\n count = %d\n",count); // 2

    count = printf("num1 = %d\n",num1);
    //num1 = 20\n
    printf("\n count = %d\n",count); // 10

    //_________________________________________
    // return value of scanf

    int n1,n2,n3;
    int cnt;
    printf("Enter the values for n1,n2 and n3 :");
    cnt = scanf("%d%d%d",&n1,&n2,&n3);

    printf("n1 = %d  n2 = %d  n3 = %d\n",n1,n2,n3);
    printf("count of scanf = %d\n",cnt);

    return 0;
}