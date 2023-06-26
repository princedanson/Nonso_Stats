#include <stdio.h>
#define SIZE 40

void statistics(unsigned char *_array,unsigned int len);

/*    @brief DIsplays the all the element of am array
    
    This function printhe elements in an array it makes use of 
    two parameters _array and len both of unsigned char and int 
    respectively. with no return value

    @param _array
    @param _len
*/
void print_array(unsigned char* _array,unsigned int len);
/*
*   @brief displays the maximimum value of an array

     This funtion takes in parameters the first parameter takes in an
     unsigned character element of the array and the seccon the lenght 
    of the array,
    this funtion loops through the array to  find the maximum element of 
    in the array and return the maximum value in the array.

    @param _array the unsigned character of the element
    @param _len the total number of element in ther array
    @return max This returns the maximum element in the array
*/
int find_median(unsigned char*  _array,unsigned int len);

/*
    @brief Fnction that swap elements
    this function help to swap two element positions in an array

    @param xp
    @param yp;
*/
void swap(unsigned char *x,unsigned char *y);
/*  
    @brief Display the mean value of an array

    This function display the mean value of an array, uses two parameters 
    the array length and the array name to calculate the mean of the array.

    @param _array this points to the array value
    @param thts the lenght og the array 

*/
int find_mean(unsigned char* _array,unsigned int len);


unsigned char find_maximum(unsigned char* _array, unsigned int len);

/*
    @brief  Display the minimum element in an array

    This function returns the least or minimum value in an array
    the array is made of two parameter and a return value where the 
    parameter are both unsigned character and unsigned interger respectively
    and the return value is an unsigned character.

    @param _array the unsigned character of the element
    @param _len the total number of element in ther array
    @return min This returns the minimum element in the array
*/
unsigned char find_minimum(unsigned char * _array,unsigned int len);

/*
    @brief function to sort array in decending oder 

    This function sorts the Elements of an array from higher to lower magnitude

    @param a Array augument
    @param n Array lenght

*/
void sort(unsigned char a[],int n);