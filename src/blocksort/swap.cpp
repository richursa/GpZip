//GpZip 13-01-2019 4.35PM IST
void swapIntegers(int *pReference1 , int *pReference2) //two referencesa are passed which are then swapped using temporary variable temp
{
    int mTemp;
    mTemp = *pReference1;
    *pReference1 = *pReference2;
    *pReference2 = mTemp;
}