/*
	Name: v.elakkiya
	Date: 08/02/23 14:21
	Description:ralloc dmc 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
int* ptr ,n1 ,n2, i;
printf("Enter size:);
scanf("%d",&n1);
ptr = (int*)malloc(n1*sizeof(int));
printf("Addresses of previously allocated Memory.\n");
for (i = 0; i < n1; ++i)
printf("%u\n", ptr+i);
printf("Enter new size:\n);
scanf("%d",&n2);
ptr = realloc(ptr,n2*sizeof(int)); // reallocating the memory
printf("Addresses of newly allocated memory are:");
for (i = 0; i < n2; ++i)
printf("%u\n ", *(ptr)+i);
free(ptr);
ptr=NULL;
return 0;
}