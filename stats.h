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
 * @brief Peer-graded Assignment: Week 1 Application Assignment
 *
 *Introduction to Embedded Systems Software and Development Environments
 *
 * @author yaswanth sai ravi
 * @date 06-02-2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* print_statistics() */ 
void print_statistics(unsigned char test[]);

/**
 * @brief prints all the statistics i.e median, mean , maximum , minimum
 * @param test[] array of size 'SIZE'
 *
 * @return void
 */

/* print_array() */ 
void print_array(unsigned char test[]);

/**
 * @brief prints all the numbers of the array
 * @param test[] array of size 'SIZE'
 *
 * @return void
 */

/* find_median(unsigned char test[]) */ 
float find_median(unsigned char test[]);

/**
 * @brief prints median of given data
 * @param test[] array of size 'SIZE'
 *
 * @return median
 */

/* find_mean(unsigned char test[]) */ 
float find_mean(unsigned char test[]);

/**
 * @brief prints mean of given data
 * @param test[] array of size 'SIZE'
 *
 * @return mean
 */

/* find_maximum(unsigned char test[]) */ 
int find_maximum(unsigned char test[]);

/**
 * @brief prints the data with highest value
 * @param test[] array of size 'SIZE'
 *
 * @return maximum
 */

/* find_minimum(unsigned char test[]) */ 
int find_minimum(unsigned char test[]);

/**
 * @brief prints minimum value of given data
 * @param test[] array of size 'SIZE'
 *
 * @return minimum
 */

/* sort_array(unsigned char test[]) */ 
void sort_array(unsigned char test[]);

/**
 * @brief sorts the given array and prints it
 * @param test[] array of size 'SIZE'
 *
 * @return void
 */

#endif /* __STATS_H__ */
