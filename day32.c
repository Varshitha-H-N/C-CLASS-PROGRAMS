#include<stdio.h>
int main()
{

    FILE *file = fopen("example.txt", "r+");
    if(file==NULL)
    {

        printf("error opening file for reading and writting.\n");
        return 1;
    }
    fseek(file,0,SEEK_SET);
    fprintf(file, "update content in file successfully.\n");
    fclose(file);
    printf("data written to file successfully");
    return 0;
}
