#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<stdio.h>
int main(){
    int n,fd;
    char buff[50];
    printf("Enter the text to write in to the file");
    n=read(0,buff,50);
    fd=open("file",O_CREAT|O_RDWR,0777);
    write(fd,buff,n);
    write(1,buff,n);
    close(fd);
}
