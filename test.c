#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

int main(int argc, char **argv){
  int fd;
  char buff[256];

  fd = open("image.png", O_RDONLY, 0777);
  
  if(fd>=0){
    read(fd, buff, 1000);
    printf("%s\n",buff);
  }else{
    printf("%s\n",strerror(errno));
  }
  return 0;
}
