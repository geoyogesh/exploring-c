#include <stdio.h>

int main()
{
int a=1;
//printf("%d",sizeof(a));
printf("%zu bits\n",sizeof(a));
printf("%zu bits\n",sizeof(int));
printf("%lu bits\n",(unsigned long)sizeof(int));
return 0;
}
