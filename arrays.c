/*working with arrays*/

#include <stdio.h>

int main()
{
/*
Collection of finite number of objects of same type
Size (Pointer to first element + n-1 elements)
memory is alloted consecutively for n elements 
*/


int i;
int a[5];

for (i=0; i<5;i++)
{
//a[i] = i;
printf("%d\n",a[i]);
}

float num[100];
char s[256];

//program may crash - may give segmentation fault while running the program
num[100]=1;
printf("%d",num);

printf("end\n");
return 0;
}

