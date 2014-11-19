#include <stdio.h>
/*Print the string in reverse*/
int main()
{
int i =0;
int ch;
char str[100];
ch= getchar();
while (ch != EOF && i < 100)
{
	str[i] = ch;
	i++;
	ch = getchar();
}

for (i=i-1;i>=0;i--)
{
	putchar(str[i]);
	//printf("%c\n",str[j]);
}
printf("\n");
return 0;
}
