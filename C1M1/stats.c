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
 * @file <C1M1> 
 * @brief <first course assessment >
 *
 * this code will calculate the max,min,mean,and median of a given array w
 *
 * @author <Ahmed Barakat>
 * @date <29/4/2023>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

unsigned int print_statistics(int minimum,int  maximum, int mean, float  median) // A function that prints the statistics of an array including minimum, maximum, mean, and median.
{
printf("minimum = %d \t maximum= %d\t mean=%d\t median=%9.6f\t",minimum,maximum,mean, median);
 printf("\n");
}

unsigned char print_array(unsigned char a[],unsigned char size )// this function prints the content of the array without any sorting 
{
  printf("given array --\n");
  for(int i=0;i<size;i++)
  {
    printf("%d\t",a[i]);
if (i==8-1||i==8*2-1||i==8*3-1||i==8*4-1||i==8*5-1)
{
  printf("\n");
}
  }
  printf("\n");
}

float find_median(unsigned char a[],unsigned char size) //a function to find the median in the array
{
  int i,j;
  for(i=0;i<size-1;i++)
  {
    for(j=0;j<size-i-1;j++)
    if(a[j]>a[j+1])
    {
unsigned char temp = a[j];
a[j]=a[j+1];
a[j+1]=temp;
    }
  }
  
printf("sorted array(ascending) = --------\n"); //sort the arry and print it 
for(int k=0;k<SIZE;k++)
{
    printf("%d\t",a[k]);
if (k==8-1||k==8*2-1||k==8*3-1||k==8*4-1||k==8*5-1)
{
  printf("\n");
}
 
}
if(size % 2 == 0){
float mediann=(a[size/2 -1]+a[size/2])/2.00;
//printf("median is = %9.5f" , mediann);
 printf("\n");
return mediann;

}
}
unsigned char find_min(unsigned char a[],unsigned char size){
  unsigned char c,location;
  for(c=1;c<size;c++)
  {
  if(a[c]<a[location])
  location = c;
}
//printf("The minimum value of the given array is %d and it's location in the array is %d.\n",a[location],location+1);
unsigned char min = a[location];
return min;
}

unsigned char find_max(unsigned char a[],unsigned char size){
  unsigned char c,location;
  for(c=1;c<size;c++)
  {
  if(a[c]>a[location])
  location = c;
}
unsigned char max = a[location];
return  max;
}
unsigned char find_mean(unsigned char a[],unsigned char size){  // finding the mean value of all the elements in the array
 int long  c,sum;
  for(c=0;c<size;c++)
  {
  sum =sum + a[c];
  
}
//printf("sum=%d \n",sum);
return  sum/size;

}
unsigned char sortarray(unsigned char a[] , unsigned char size){
 int i,j;
  for(i=0;i<size-1;i++)
  {
    for(j=0;j<size-i-1;j++)
    if(a[j]<a[j+1])
    {
unsigned char temp = a[j];
a[j]=a[j+1];
a[j+1]=temp;
    }
  }
  
printf("sorted array(descending) = --------\n"); // prints the array in descending order
for(int k=0;k<SIZE;k++)
{
    printf("%d\t",a[k]);
if (k==8-1||k==8*2-1||k==8*3-1||k==8*4-1||k==8*5-1)
{
  printf("\n");
}
  
}
}

void main() {

 unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

unsigned int max,min,mean;
float median;
  /* Statistics and Printing Functions Go Here */
print_array(test,SIZE); 
min=find_min(test,SIZE);
max = find_max(test,SIZE);
mean= find_mean(test,SIZE);
median=find_median(test,SIZE);
print_statistics(min,max,mean, median);
sortarray(test,SIZE);
 find_mean(test,SIZE);
/* Add other Implementation File Code Here */
}