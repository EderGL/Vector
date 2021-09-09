#include<stdio.h>
#include<stdlib.h>
#include "../libs/vector.h"

vector initVector(size_t size){
    vector newVector=NULL;
    newVector=malloc(sizeof(vector));
    newVector->elements=calloc(size, sizeof(float));
    newVector->n_elements=size;
    return newVector;
}

void printArray(size_t n, int array[n]){
  printf("\n\n");
  for(int index=0; index<n; index++){
    printf("memory %p, index %u element %d\n", &array[index], index, array[index]);
  }
}

void setVector(size_t n, int array[n], int vector){
  for(int i=0;i<n;i++){
      array[i]=vector;
  }
}

vector freeVector(vector phasor){
  vector myPhasor;
  myPhasor=phasor;
  free(myPhasor);
}
