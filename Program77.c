#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
void DisplayReverse(int Arr[], int iSize)
{
    int iCnt =0;
    printf("Reverse Array is :\n ");
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
       printf("%d\n",Arr[iCnt]); 

    } 
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
   

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    
    // Step 4 : Call the function
     DisplayReverse(ptr, iLength);
     
    


    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}