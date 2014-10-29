#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
  int secret=0;
  int *ptr = &secret;
  printf("%d\n",sizeof(argv[1]));
    if (secret == 1337){
      printf("win");
    }
    return 0;  



}
