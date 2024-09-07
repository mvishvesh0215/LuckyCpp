#include <stdio.h>

#include <string.h>

int main()

{

char *s = "SunBeam"; int i; char * p = s; 
// printf("%d",strlen(p));
for(i = 0; i <strlen(p); ++i, ++p){
// printf("%d %d\n",i,p);
printf("%c", *p++);
}
return 0;

}