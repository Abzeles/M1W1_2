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
 * @brief stats.c file calculates statistics of the set of numbers.
 * stats.c file used to calculate statistics of the set of numbers
 * and print it on the screen. Parameters which will be calculated are:
 * -Maximum
 * -Minimum
 * -Mean
 * -Average
 * And data set from the highest number to the lowest.
 * @author <Jonas Jasiulevičius>
 * @date <2020-11-30>
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main(void)
{

 int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                    114, 88,   45,  76, 123,  87,  25,  23,
                    200, 122, 150, 90,   92,  87, 177, 244,
                    201,   6,  12,  60,   8,   2,   5,  67,
                    7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int maximum;
  int minimum;
  int mean;
  int median;

 
  /* Statistics and Printing Functions Go Here */
  maximum = find_maximum(test, SIZE);//find maximum using maximum function.
  minimum = find_minimum(test, SIZE);//find minimum using minimum function.
  mean = find_mean(test, SIZE);//find mean using mean function.
  print_array(SIZE, test, "Current not sorted array: ");
  sort_array(test, SIZE);//sorting array from highest to lowest value.
  median = find_median(test, SIZE);//find median using median function.
  printf("\n");
  print_array( SIZE, test, "Sorted array from highest to lowest number: ");//printing sorted array.
  printf("\n");
  print_statistics(minimum, maximum, mean, median);// printing statistics
}
//Find maximum function.
int find_maximum(int data[], int count){
  int i;
  int maximum;   
  if ( count <= 0 ) {
    count = 1;
  }

  maximum = data[0];

  for (i = 0; i < count; i++){
    if (maximum <= data[i]) {
      maximum = data[i];
    }
  }
  return(maximum);
}
//Find minimum function
int find_minimum(int data[], int count){
  int i;
  int minimum;  
  if ( count <= 0 ) {
    count = 1;
  }

  minimum = data[0];
  
  for (i = 0; i < count; i++){
    if (minimum >= data[i]) {
      minimum = data[i];
    }
  }
  return(minimum);
}
//Find mean function
int find_mean(int ptr[], int count){
  int i;
  int mean;
   
  if ( count <= 0 ) {
    count = 1;
  }
  
  for(i = 0; i < count; i++){
    mean += ptr[i];
  }
 
  return (mean / count);
}
//find median function.
int find_median(int array[] , int n)
{
    int median=0;
    
    if(n%2 == 0)
      median = (array[(n-1)/2] + array[n/2])/2;
    else
      median = array[n/2];
    
    return median;

}//Array printing function
void print_array(int how_many, int data[], char *str)
{
    int i;
    printf("%s ", str);
    printf("\n");

    for (i=0; i< how_many; i++){
        printf("%d\t", data[i]);
        if( i % 8 == 0 ){
          printf("\n");
        }
    }
}
//Parameters swap function
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//Data sort function
void sort_array(int data[], int how_many)
{
    int i, j;
    for(i = 0; i < how_many; i++){
        for(j = how_many -1; j > i; j--)
            if(data[j-1] < data[j])
                swap(&data[j-1], &data[j]);
    }
}
//Printing all the statistics
void print_statistics(int min, int max, int mean, int median)
{
  printf("Minimum number of array is: %d\n", min);
  printf("Maximum number of array is: %d\n", max);
  printf("Mean of array is: %d\n", mean);
  printf("Median of array is: %d\n", median);
}
/* Add other Implementation File Code Here */
