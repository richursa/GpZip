#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std; 
int stringCompare(int , int);
class string_class
{
    public:
    static const int maxSize = 10240000;
    char string[maxSize];
    int index[maxSize];
    int size;
    void input()
    {
        cin>>string;
        size = strlen(string);
        memcpy(string+size,string,sizeof(char)*size);
        for(int i =0;i<size;i++)
        {
            index[i] = i;
        }
    }
    void string_sort()
    {
        sort(index , index+size ,stringCompare);
    }
};
string_class a;
 int stringCompare(int index1 , int index2 ) //compare 2 string references 
    {
        int mFlag;
        for(int i=0; i<a.size;i++)
        { 
            if(a.string[index1 + i]<a.string[index2 + i]) //string2 comes first in a dictionary
            {
                mFlag = 1;
                break;
            }
            else if(a.string[index1 + i]>=a.string[index2 + i]) //string1 comes first in a dictionary
            {
                mFlag = 0;
                break;
            }
            else  //string1 and string2 are equal
            {
                mFlag =0;
            }
        
        }
        return mFlag;
    }


int main()
{
    
    a.input();
    a.string_sort();
 //   for(int j=0;j<a.size;j++)
   // {
        for(int i=0;i<a.size;i++)
        {
            cout<<a.string[a.index[i]+a.size-1];
        }
        cout<<"\n";
  //  }
}