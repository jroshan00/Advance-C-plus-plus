#include <stdio.h>
#include<iostream>
#ifdef DEBUG
#define DEBUG_TEST 1
#else
#define DEBUG_TEST 0
#endif

#define sum(a,b,c) a+b+c

#define SQR(s)  ((s) * (s))
#define PRNT(a,b) \
  printf("value of a = %d\n", a); \
  printf("value of y = %d\n", b) ;

#define debug(...) fprintf(stderr, __VA_ARGS__); \
                  //  fprintf(stderr, __VA_ARGS__);     /*   Becomes fprintf(stderr, "flag");   */

int main()
{
  int x = 2;
  int y = 3;

  // PRNT(DEBUG_TEST,y);  //OUTPUT WILL BE 0 AS THE DEBUG IS NOT DEBUG

  debug("flag"); 

  printf("\n");
  int a=sum(1,2,3);
  PRNT(a,y);

  return(0);
}