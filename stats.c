
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
 * @file <Nonso_Stats> 
 * @brief This program find compute the mean, median, maximum , menimum and sort the elements of an array 
 *

 *
 * @author <Odai Daniel Chukwunonso>
 * @date <26/6/2023>
 *
 */


#include "stats.h"
int main(void){
    
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                    7,  87, 250, 230,  99,   3, 100,  90
                                };
    unsigned char max,min;
    int mean, median;
    //Statistical analysis display
    statistics(test,SIZE); 
    //Pirnting the Array
    print_array(test,SIZE);
    // Median
    median = find_median(test,SIZE);
    printf(" tThe Median is : %d\n",median);
    // the Mean of an array
    mean = find_mean(test,SIZE);
    printf("The mean is: %d\n",mean);
    // Maximum value of an array
    max = find_maximum(test,SIZE);
    printf("Maximum value is: %u  \n",max);
    // Minimum value of an array
    min = find_minimum(test,SIZE);
    printf("The Minimum value is: %u \n",min);  
    // Soring the array in a decending oder and printing the array
    sort(test,SIZE);
    print_array(test,SIZE);                              
    return 0;
}
void statistics(unsigned char *_array, unsigned int len)
{
    unsigned char max,min;
    unsigned int mean,median;
    min = find_minimum(_array,len);
    max = find_maximum(_array,len);
    mean = find_mean(_array,len);
    median = find_median(_array,len);    
    printf("********************************************\n");
    printf("* Minimum Value is: %d\n",min);
    printf("* Maximum value is: %d \n",max);
    printf("* The mean value is: %d\n",mean);
    printf("* The Median Value is: %d\n", median);
    printf("********************************************\n");
}
void print_array(unsigned char* _array,unsigned int len)
{
    unsigned int counter =0;
    unsigned char col =0;
    while (counter < len)
    {
        if(col==6){
            printf("\n");
            col =0;
        }
        printf("   %4u",*_array);
        col++;
        _array++;
        counter++;
    }
    printf("\n");
    
}
int find_median(unsigned char *_array, unsigned int len)
{
    unsigned char temp[len];
    unsigned int median=0;
    for (int i = 0; i < len; i++)temp[i] =*_array++;
    sort(temp,len);
    if(len%2!=0)
    {
        median= temp[len/2];
    }
    else
    {
        median = (temp[len/2]+temp[len/2-1])/2;
    }
    
    return median;
}
int find_mean(unsigned char* _array,unsigned int len)
{
    unsigned int count=0;
   unsigned int total=0,mean;

    while (count <len)
    {
       total =total+(int)*_array;
       _array++;
       count++;
    }
     mean=(total/len);
    return mean;
}
unsigned char find_maximum(unsigned char* _array,unsigned int len)
{
    unsigned char max = *_array;
    unsigned int counter = 0;
    while(counter < len)
    {
        if(max < *_array)
        {
            max=*_array;
        }
    _array++;
    counter++;
    }
    return max;
}
unsigned char find_minimum(unsigned char * _array,unsigned int len)
{
    unsigned char min = *_array;
    unsigned int counter = 0;
    while (counter < len)
    {
        if (min >= *_array )
        {
            min=*_array;
        }
        _array++;
        counter++;
    }
    return min;
    
}
void swap(unsigned char *x, unsigned char *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
void sort(unsigned char a[],int n) { 
   int i,j,temp;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(a[j] < a[j+1])
            swap(&a[j],&a[j+1]);
      }
   }
}