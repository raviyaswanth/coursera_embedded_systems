/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Peer-graded Assignment: Week 1 Application Assignment
 *
 * Introduction to Embedded Systems Software and Development Environments
 *
 * @author yaswanth sai ravi
 * @date 06-02-2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  unsigned char sorted_array[SIZE];
  int maximum = 0;
int minimum = 0;
  float median = 0;
float mean = 0;
  
  printf("Given array \n");
  print_array(test);
  sort_array(test);
  printf("\nSorted array \n");
  print_array(test);
  printf("\n");
  maximum = find_maximum(test);
  minimum = find_minimum(test);
  median  = find_median(test);
  mean   = find_mean(test);
  print_statistics(test);

}
void print_statistics(unsigned char test[]){
printf(maximum(test));
printf(minimum(test));
printf(find_mean(test));
printf(find_median(test));
}
void print_array(unsigned char test[]){

unsigned int i = 0;
for(i = 0; i< SIZE;i++){
printf("%i ",test[i]);
}
}

void sort_array(unsigned char test[]){
unsigned int num = 0;
int i = 0; int j = 0;
for(i = 0;i<SIZE;i++){
for(j = i+1;j<SIZE;j++){
if(test[i]>test[j]){
num = test[i];
test[i] = test[j];
test[j] = num;
}
}
}
}

int find_maximum(unsigned char test[]){
sort_array(test);
return test[SIZE-1];
}

int find_minimum(unsigned char test[]){
sort_array(test);
return test[0];
}

float find_mean(unsigned char test[]){
float mean = 0;
unsigned int i = 0;
for(i = 0; i< SIZE;i++){
mean = mean+test[i];
}
mean = mean/SIZE;
return mean;
}

float find_median(unsigned char test[]){
sort_array(test);
if(SIZE%2!=0){
return test[SIZE/2];
}
else{
return (test[(SIZE+1)]+test[(SIZE-1)])/2;
}
}




