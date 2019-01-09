#include<iostream>
using namespace std;
int main()
{
    char *stringArray = new char[1024];
    cout<<"enter the string ";
    cin>>stringArray;
    char *pointerArray[1024]; //pointer to the different rotations of string
    for(int i=0;i<1024;i++)
    {
        pointerArray[i] = stringArray[i];
    }

}
void stringBubbleSort(char *pointerArray , int size)
{
    for(int  i =0 ;i<size;i++)
    {
        for(j=i;j<size-1;j++)
        {
            if(stringCompare(pointerArray[i],pointerArray[i+1])
        }
    }
}
int stringCompare(char *string1 , char *string2, int length)
{
    for(int i=0; i<size;i++)
    {
        if(string1[i]>string2[i))
        {
            flag = 1;
            break;
        }
        else if(string1[i]<string2[i]))
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