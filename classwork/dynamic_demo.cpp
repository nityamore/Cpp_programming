#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the no. of elements : \n";
    cin>>length;

    //Step 1: allocate the memory
    Arr = new int[length];
    if(Arr == NULL)
    {
        cout<<"Unable to allocate memory\n";
    }
    else 
    {
        cout<<"memory gets successfully allocated\n";
    }

    //Step 2: use the memory

    //Step 3: Deallocate the memory
    delete [] Arr;

    return 0;
}