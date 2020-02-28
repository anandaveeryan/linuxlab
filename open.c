#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
int main(){
int fd;
fd = open ("test.txt", O_RDONLY);
if (fd == -1){
    printf("Error");
}else{
    printf("File opened successfully\n");
    printf("%d\n",fd);
}
}