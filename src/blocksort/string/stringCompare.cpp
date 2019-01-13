//GpZip 13-01-2019 4.45PM IST
int stringCompare(char pString1[] , char pString2[], int pSize) //compare 2 string references 
{
    int mFlag;
    for(int i=0; i<pSize;i++)
    { 
        if(pString1[i]>pString2[i]) //pString2 comes first in a dictionary
        {
            mFlag = 1;
            break;
        }
        else if(pString1[i]<pString2[i]) //pString1 comes first in a dictionary
        {
            mFlag = -1;
            break;
        }
        else  //pString1 and pString2 are equal
        {
            mFlag =0;
        }
    }
    return mFlag;
}