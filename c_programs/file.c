/*#include <stdio.h>
void main(){
FILE *fp;
char ch;
fp=fopen("file_handle.c","w");
while(1)
{
    ch=fgetc(fp);
    if(ch==EOF)
    break;
    printf("%c",ch);
}
fclose(fp);
}*/
/*#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 1000
int main(){
    char data[DATA_SIZE];
    FILE *fptr;
    fptr=fopen("file.txt","w");
    if(fptr==NULL){
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter the contents to store in file:");
    fputs(data,fptr);
    fclose(fptr);
}*/
/*#include <stdio.h>
int main(){
    FILE *filepointer;
    filepointer=fopen("file.txt","r");
    printf("The location of the current pointer is %d bytes from the start of the file\n",ftell(filepointer));
    fseek(filepointer,6,SEEK_SET);
    printf("the location of the current pointer is %d bytes from the start of the file\n",ftell(filepointer));
    fclose(filepointer);
    return 0;
}*/



