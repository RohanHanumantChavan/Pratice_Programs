#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
int CheckOCCurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0;
    
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
             break;
        }
        
        }
        return iCnt;
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iValue = 0;
    int iRet = 0;

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

    printf("Enter the Number to findout the last Occurance : \n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
     iRet = CheckOCCurance(ptr, iLength,iValue);
    if(iRet == -1 )
    {
        
        printf("there is no %d  in the  Array \n",iValue);

    }
    else
    {
        
        printf(" %d is Occured in Array at last index %d\n",iValue,iRet);

    }
    


    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}