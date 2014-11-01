#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

int main(int argc, char **argv){
  int length;

  scanf("%d", &length);
  printf("%d\n",length);
  return 0;
}
