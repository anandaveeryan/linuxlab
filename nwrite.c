#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
int main(){
    int fd,nr;
    fd = open ("w.txt",  O_RDONLY | O_WRONLY | O_CREAT | O_NONBLOCK);
    if(nr==-1){
        if(errno==EAGAIN){
            nr = 0;
        }
    }else{
        nr = write(fd,"anandaveeryan",13);
        printf("Written Successfully\n");
    }
}