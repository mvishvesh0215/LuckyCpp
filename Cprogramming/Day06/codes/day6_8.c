// const

#include<stdio.h>
int main()
{
     float const PI = 3.14f;
     // const float PI = 3.14f

    printf("PI = %.2f\n",PI); // 3.14

  //  PI = 5.60f; // error as PI is constant
  //  printf("PI = %.2f\n",PI); // 5.60

  float *ptr = &PI;

  *ptr = 5.23f;
  printf("PI = %.2f\n",PI); // 5.23
    return 0;
}