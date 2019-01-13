//GpZip 13-01-2019 6.36PM IST
#include<iostream>
#include<stdio.h>
#include<string.h>
#include "src/blockSort/blockSort.h"
using namespace std;
int main()
{
    char stringArray[1024];
    cout<<"enter the string";
    cin>>stringArray;
    int size = strlen(stringArray);
    int pointerArray[1024];
    for(int i=0;i<size;i++)
    {
        pointerArray[i] = i;
    }
    stringBubbleSort(stringArray,pointerArray,size);
    for(int i =0 ;i<size;i++)
    {
        cout<<stringArray[pointerArray[i]+size-1];
    }
}