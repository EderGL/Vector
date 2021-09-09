#include <stdio.h>
#include <stdlib.h>


#include "../libs/vector.h"
#include "../libs/unity.h"

#define DIMENSIONS 3
#define ELEMENTS 3
#define N_ELEMENTS 3


void setUp(void){

}

void tearDown(void){

}


void test_VectorInit(void){
    puts("Testing Vector Init function");
    vector test_vector = NULL;
    test_vector = initVector(DIMENSIONS);
    TEST_ASSERT_FLOAT_IS_DETERMINATE(DIMENSIONS);
    freeVector(test_vector);

}

void test_VectorSet(void){
  int array[DIMENSIONS];
    puts("Testing Vector Set Function");
    vector test_vector = NULL;

    test_vector = initVector(DIMENSIONS);

    setVector(DIMENSIONS, array, ELEMENTS);


    // TEST CODE
    TEST_ASSERT_EACH_EQUAL_INT(DIMENSIONS, array, ELEMENTS);
    freeVector(test_vector);

}


void test_VectorFree(void){
    puts("Testing Vector Free Function");
    vector test_vector = initVector(DIMENSIONS);

    test_vector = freeVector(test_vector);

    TEST_ASSERT_NULL(test_vector);
}

int main(void){
    vector dynamicVector = NULL;

    dynamicVector=initVector(SIZE);

    UNITY_BEGIN();
    RUN_TEST(test_VectorInit, __LINE__);
    RUN_TEST(test_VectorSet, __LINE__);
    RUN_TEST(test_VectorFree, __LINE__);



    setVector(SIZE, dynamicVector->elements, VECTOR);
    printArray(dynamicVector->n_elements, dynamicVector->elements);


    printf("Init and Set Vector\n");

    freeVector(dynamicVector);

    return UNITY_END();

}
