#include <stdio.h>

int
main(void)
{
int intType;
float floatType;
char charType;
long long int longlongintType;
long int longintType;
printf("char is %zu byte(s)\n", sizeof(charType));
printf("int is %zu byte(s)\n", sizeof(intType));
printf("long int is %zu byte(s)\n", sizeof(longintType));
printf("long long int is %zu byte(s)\n", sizeof(longlongintType));
printf("float is %zu byte(s)\n", sizeof(floatType));
return (0);
}
