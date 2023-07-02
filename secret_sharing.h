#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define FRIENDS 100
#define FRIENDS_NEEDED 3
#define OUTPUT "output.txt"
#define a 2
#define b 3

int polynomial(int x, int secret){
  return a*x*x + b*x + secret;
}

void split(int secret){
  int i;
  FILE *out_file = fopen(OUTPUT, "w");
  for (i=1; i<FRIENDS+1; ++i){
    fprintf(out_file, "%d ", i);
    fprintf(out_file, " %d\n", polynomial(i, secret));
  }
}

void join(int v[], int f[]){
  int i, secret, sum=0;
  for (i=0; i<FRIENDS_NEEDED; ++i){
    sum += f[i];
  }
  for (i=0; i<FRIENDS_NEEDED; ++i){
    sum -= a*v[i]*v[i] + b*v[i];
  }
  secret = sum/3;
  printf("secret : %d\n", secret);
}

