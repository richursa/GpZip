//GpZip 13-01-2019 6.36PM IST
#include<iostream>
#include<stdio.h>
#include<string.h>
#include "src/blockSort/blockSort.h"
using namespace std;
void initializeIndex(int pIndexArray[],int pSize)
{
    for(int i=0;i<pSize;i++)
    {
        pIndexArray[i] = i;
    }
}
void printTransformedString(char pStringArray[],int pIndexArray[] , int pSize)
{
    for(int i =0 ;i<pSize;i++)
    {
        cout<<pStringArray[pIndexArray[i]+pSize-1];
    }
}
int main()
{
    char stringArray[1024];
    cin>>stringArray;
    int size = strlen(stringArray);
    int indexArray[1024];
    initializeIndex(indexArray,size);
    stringBubbleSort(stringArray,indexArray,size);
    printTransformedString(stringArray,indexArray,size);
}