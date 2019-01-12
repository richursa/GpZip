#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int *pointer1 , int *pointer2)
{
    int temp;
    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}
int stringCompare(char string1[] , char string2[], int size)
{
    int flag=0;
    for(int i=0; i<size;i++)
    { 
        if(string1[i]>string2[i])
        {
            flag = 1;
            break;
        }
        else if(string1[i]<string2[i])
        {
            flag = -1;
            break;
        }
        else 
        {
            flag =0;
        }
    }
    return flag;
}
void stringBubbleSort(char stringArray[],int pointerArray[], int size)
{
    for(int  i =0 ;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(stringCompare(&stringArray[0]+pointerArray[j],&stringArray[0]+pointerArray[j]+1,size)==1)
            {
                swap(pointerArray+j,pointerArray+j+1);
            }
        }
    }
}
int main()
{
    char stringArray[1024];
    cout<<"enter the string";
    cin>>stringArray;
    int size = strlen(stringArray);
    int pointerArray[size];
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