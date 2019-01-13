//GpZip 13-01-2019 4.54PM IST
#include "string/stringCompare.h"
#include "string/stringCopy.h"
#include "swap.h"
//the indexes of all rotations of pStringArray are given in pIndexArray 
//pIndexArray is sorted according to how the rotations of pStringArray 
//will be displayed in a dictionary
void stringBubbleSort(char pStringArray[],int pIndexArray[], int pSize) 
{
    stringConcateneteWithSelf(pStringArray,pSize);
    for(int  i =0 ;i<pSize;i++)
    {
        for(int j=0;j<pSize-1;j++)
        {
            if(stringCompare(&pStringArray[0]+pIndexArray[j],&pStringArray[0]+pIndexArray[j]+1,pSize)==1)
            {
                swapIntegers(pIndexArray+j,pIndexArray+j+1);
            }
        }
    }
}