#include<iostream>
#include"functions.h"
void ReverseArray(int array[],int size){
  int i,temp,s;
  s=size-1;
    for(i=0;i<=(size/2);i++)
    {
        temp=array[i];
        array[i]=array[s];
        array[s]=temp;
        size--;
      }
}
void RotateArray(int array[],int size,int n){
  int temp,i,j;
  int s=size-1;
    for( i=0;i<n;i++)
    {
        temp=array[0];
        for(j=0;j<s;j++)
        {
            array[j]=array[j+1];

        }
        array[j]=temp;
      }
    }
int SearchArray(int array[],int size,int item)
{
    int i,j=0;
    for(i=0;i<size;i++)
    {
        if(array[i]==item)
        {
            j=2;
            return i;

        }
    }
    if(j==0)
    {
        return -1;
    }
}
void SortArray(int array[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]>=array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}
int SortSearchArray(int array[],int size,int item)
{
    int i,j=0;
    for(i=0;i<size;i++)
    {
        if(array[i]==i)
        {
            j++;
            return i;

        }
    }
    if(j==0)
    {
        return -1;
    }
}
int BinarySearch(int array[],int first_term,int last_term,int item)
{
    int mid_term=(first_term+last_term)/2;
    if(array[mid_term]==item)
    {
        return mid_term;
    }
    else if(item<array[mid_term] && item>=first_term)
    {
        last_term=mid_term-1;
        return (BinarySearch(array,first_term,last_term,item));
    }
    else if(item>array[mid_term] && item<=last_term)
    {
        first_term=mid_term+1;
        return (BinarySearch(array,first_term,last_term,item));
    }
    else{
        return -1;
      }
}
