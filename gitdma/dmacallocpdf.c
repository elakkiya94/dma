/*
	Name:v.elakkiya 
	Date: 08/02/23 12:27
	Description: dma calloc pdf program
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
int* ptr,n,i;
printf("Enter number of elements");
scanf("%d",&n);
ptr = (int*)calloc(n,sizeof(int));
// Dynamically allocate memory using malloc()
if (ptr == NULL)
{
printf("Memory not allocated.\n");
exit(1);
}
else
{
printf("Memory successfully allocated using malloc");
for (i = 0; i < n; ++i)
  ptr[i] = i + 1;
printf("The elements of the array are:");           // Print the elements of the array
for (i = 0; i < n; ++i)
  printf("%d", ptr[i]);
}
free(ptr);
ptr=NULL;
printf("\n%d", ptr);
return 0;
}