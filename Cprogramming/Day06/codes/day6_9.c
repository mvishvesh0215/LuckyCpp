// const
#include<stdio.h>

int main()
{
   const float PI = 3.14f;

   float const * const ptr = &PI;
   // ptr cannot change the value of PI
 
  // *ptr = 5.23f; // error

  float fvar = 1.2f;
  //ptr = &fvar;


    return 0;
}

/*
float const PI = 3.14f;

float *ptr = &PI; it can change the value of PI

float const *ptr = &PI;
here it cannot change the value of PI
but it can point to another variable

float * const ptr = &PI;
it cannot point to another variable
but it can change the value of PI

float const * const ptr = &PI;
it can neither change the value of PI
not it can point to another variable




*/