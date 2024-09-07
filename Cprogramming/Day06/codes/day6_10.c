// char arrays

#include<stdio.h>

int main()
{
    char str1[5] = {'A','B','C','D','E'}; // character array

    char str2[5] = {'A','B','C','D','\0'}; // string

    char str3[5] = {'P','U','N','E'}; // string
    // partial initialization

    char str4[5] = "Info"; // string

    char str5[4] = "Pune"; // char array

    printf("%s\n",str4); // Info
  //  printf("%s\n",str5); // garbage

// print char array with loops
    for(int i=0;i<4;i++)
    {
        printf("%c",str5[i]);
    }

  //  char str6[]; // error

  char str6[] = {'S','u','n','b','e','a','m'}; // char array
  char str7[] = "Sunbeam"; // string
    return 0;
}