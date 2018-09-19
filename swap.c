//Hasif Ahmed Hot Swapping
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int ray[10];
  int *rp = ray;

  int i;
  int x;
  srand(time(NULL)); //generate new random sequence
  for(i = 0; i < 10; i++){

    x = rand(); //get a random number
    *(rp + i) = x; //use pointer to change value at index i
  }
  int g = 0;
  *(rp + 9) = g;

  int j;
  for(j = 0; j < 10; j++){
    printf("ray[%d] = %d\n",j,*(rp + j));
  }

  int second[10];
  int *sp = second;

  int l;
  int o;
  for(l = 9; l >= 0; l--){
    *(sp + l) = *(rp + 9 - l); //fill from opposite directions
  }

  int u;
  for(u = 0; u < 10; u++){
    printf("second[%d] = %d\n",u,*(second + u));
  }

    return 0;
}
