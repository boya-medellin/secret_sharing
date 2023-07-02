#include "secret_sharing.h"

int main(int argc, char *argv[]){
  int secret, i, j;
  int v[FRIENDS_NEEDED], f[FRIENDS_NEEDED];

  if (argc==1){
    printf("No commands were given\n");
    return 0;
  }
  if (strcmp("split", argv[1]) == 0){
    secret = atoi(argv[2]);
    split(secret);
  }
  if (strcmp("join", argv[1]) == 0){
    if ( argc < 2 + FRIENDS_NEEDED*2 ){
      printf("Not enough data given\n");
      return 0;
    }
    /* Read data from command line input */
    /* e.g ./secret_sharing join 1 f(1) 2 f(2) 3 f(3) */
    j=0;
    for (i=2; i<2+2*FRIENDS_NEEDED; i+=2){
     v[j] = atoi(argv[i]);
     f[j] = atoi(argv[i+1]);
     ++j;
    }
    join(v, f);
  }

  return 0;
}
