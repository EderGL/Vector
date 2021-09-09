/**
 * @Author Eder García
 * @Date 7 Sept 2021
 * @Name ComplexNumber.h
 * @Copyright TDA 2021
 */

 #ifndef vector_h
 #define vector_h

 #define SIZE 20
 #define VECTOR 3

 #include <stdio.h>


 struct _vector{
     int *elements;
     size_t n_elements;
 };

 typedef struct _vector* vector;

 vector initVector(size_t size);

 void setVector(size_t n, int array[n], int vector);

 void printArray(size_t n, int array[n]);

 vector freeVector(vector phasor);

 #endif
