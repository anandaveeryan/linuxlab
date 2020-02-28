#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    int fd,nr;
    fd = open ("w.txt", O_RDONLY | O_WRONLY | O_CREAT);
    nr = write(fd,"anand",5);
    if(nr==-1){
        printf("Error");
    }else{
        printf("Written successfully\n");
    }
}