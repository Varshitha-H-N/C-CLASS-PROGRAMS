#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("example.txt","w");
    if(file==NULL)
    {

     printf("error opening the file for writing.\n");
    return 1;
}
fprintf(file,"Hello, world!\n");
fprintf(file,"this is a simple file handling example in c.\n");
fclose(file);
printf("data written to file successfully.\n");
return 0;
}
