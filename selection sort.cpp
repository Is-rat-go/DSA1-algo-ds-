#include<iostream>
using namespace std;
int main()
{
    int a[]= {1,-32,3,23,44,100,7};
    int i,j,min_index;
    for(i=0; i<7; i++) //by taking this loop,,it use for: outer loop to iterate over all the numbers therefore it belongs whole the loop
    {
        min_index=i; //it's take for all time searching for minimum value
        for(j=i+1; j<7; j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }

        }
        int temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;


    }

//take last this loop for print the sorted value
    for(i=0; i<7; i++)
    {
        printf(" %d ",a[i]);
    }

    printf("\n \n ALHAMDULLILAH PLEASURE TO MY ALMIGHTY");
    return 0;
}

