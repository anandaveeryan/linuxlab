#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    unsigned long word;
    ssize_t nr;
    int fd;
    char *c = (char *) calloc(100, sizeof(char));
    fd = open ("test.txt", O_RDONLY);
    nr = read(fd,c,30);
    if (nr == -1){
        perror("r1"); 
        exit(1);
    }else{
        printf("%s\n", c);
    }
}










