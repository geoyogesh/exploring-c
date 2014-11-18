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
printf('%d',a[i]);
}

int a[] = {1,2,3};
int b[10] = {1,2,3};


char c[] = "this is char array";
char c[] = {'a','b','\0'};

printf("end\n");
return 0;
}

