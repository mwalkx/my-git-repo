#include <stdio.h>


//Declare some global integers
int i = 5;
int j = 6;
int sum;

int main()
{
  // Int pointer declarations
  int *intPtr;
  int *intPtr2;
  int *intPtr3;

  // first, let's print the address of variable i:
  printf("Variable i is located at address %lu\n", &i);

  // now extract the address of variable i into the pinter
  intPtr = & i;

  // Print
  printf ("The int at memory locatin %lu is %d\n", intPtr, *intPtr);

  // let's do some arithmetic
  intPtr2 = & j;
  sum = (*intPtr) + (*intPtr2);
  printf("The sum of %d and %d is %d\n", *intPtr, *intPtr2,  sum);

  // not for something stranger
  printf("The integer at location %lu is %d\n", (intPtr+1), *(intPtr+1));
  printf("The integer j=%d is a location %lu\n", j, &j);

  // Let's see what the default initial value of intPtr3 is:
  if (intPtr3 == NULL) {
    printf("intPtr3 has been initialized to NULL\n");
  }
  else {
    printf("intPtr3 has been initialized to %lu\n", intPtr3);
  }
}
