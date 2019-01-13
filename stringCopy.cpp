//GpZip 13-01-2019 4.54PM IST

//the string is concateneted with itself to get all the rotations of the string :unnecessary uses more memmory 
//but gpu might execute faster due to optimal cache usage as big jumps are avoided 
//banana becomes bananabanana
void stringConcateneteWithSelf(char pStringArray[],int pSize)
{
    for(int i =0;i<pSize;i++)
    {
        pStringArray[i+pSize]=pStringArray[i];
    }
}