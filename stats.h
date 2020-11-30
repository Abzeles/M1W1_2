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
 * @file stats.h
 * @brief Statistics calculation header 
 * This header is used to write functions which will calculate
 * statistics parameters:
 * -maximum
 * -minimum
 * -mean
 * -median
 *
 * @author <Jonas Jasiulevičius>
 * @date <2020-11-30 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Function find_maximum will find maximum number.
 *
 * This function takes a set of numbers and performs finds the maximum 
 * of the set.
 * @param data Data array of all elements
 * @param count counts all elements in data set.
 *
 * @return This function returns maximum number from the set of numbers.
 */
int find_maximum(int data[], int count);

/**
 * @brief Function find_minimum will find minimum number.
 *
 * This function takes a set of numbers and performs finds the minimum 
 * of the set.
 *
 * @param data Data array of all elements
 * @param count counts all elements in data set.
 *
 * @return This function returns minimum number from the set of numbers.
 */
int find_minimum(int data[], int count);

/**
 * @brief Function find_mean will find mean number.
 *
 * This function takes a set of numbers sum them all and divides from
 * the amount of elements.
 *
 * @param ptr pointer to data set element
 * @param count counts all elements in data set.
 *
 * @return This function returns mean number from the set of numbers.
 */
int find_mean(int ptr[], int count);

/**
 * @brief Function find_median will find median number.
 *
 * This function takes a set of numbers and performs finds the median of
 * of the set. If the set of numbers are equal than it takes 2 numbers from 
 * the middle and divide them, than round down the value to the nearest integer.
 *
 * @param array  data array of all elements.
 * @param count counts all elements in data set.
 *
 * @return This function returns median number from the set of numbers.
 */
int find_median(int array[], int count);

/**
 * @brief Function print_array will print array with its name.
 *
 * This function prints an array and its name on the screen.
 *
 * @param how_many  how many elements are in the array.
 * @param data all array elements to print.
 *
 */
void print_array(int how_many, int data[], char *str);

/**
 * @brief Function swap will swap 2 numbers.
 *
 * This function swaps two integers between each other.
 *
 * @param a first number to swap.
 * @param b second number to swap.
 * 
 */
void swap(int *a, int *b);


/**
 * @brief Function sort_array will sort an array.
 *
 * This function takes a set of numbers and sort them from highest to lowest values.
 *
 * @param data  data array of all elements.
 * @param how_many counts all elements in data set.
 *
 */
void sort_array(int data[], int how_many);

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function will print out on the screenall the statistics 
 * which we calculated before. 
 * -maximum
 * -minimum
 * -mean
 * -median
 *
 * @param data  data array of all elements.
 * @param how_many counts all elements in data set.
 *
 */
void print_statistics(int min, int max, int mean, int median);
#endif /* __STATS_H__ */
