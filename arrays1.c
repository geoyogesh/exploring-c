/*working with arrays*/

#include <stdio.h>

int main()
{

// vaiable size arrays are not allowed ansi c(c89 or c90) //should be c99 or later
int size;
//float[size];


int a[] = {1,2,3};
int a1[10]; // will have garbage value
int b[10] = {1,2,3}; // rest of the values will be initialized to 0

//int b1[2] = {1,2,3,4,5,6} //code will not compile - should initilize with only 2 values

int b2[3] ={1.1,'a',1*5}; //1.1 will be down graded to 0 and ascii value of 'a' will be stored (constant expression will work)
float b3[3] ={1.1,2,size+2}; //vaiable expression will not work in all compliers (as part of Ansi C)

char c[] = "this is char array"; // will append '\0'(null charecter) at end
char c1[] = {'a','b','\0'};

printf("%s\n","this is string");
printf("%s\n",c1); //c1 should end with null charecter or else garbage values will be printed

char c2[] = {'a','b','\0','c','d','\0'};
printf("%s\n",c2); //prints "ab" string is terminated by \0 and remaining charecters are not not part of string but part of charecter array

int i;
for (i=0;i<6;i++)
{
putchar(c2[i]);
}
//skips \0 and prints everything else

printf("\nend\n");
return 0;
}
