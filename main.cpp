#include<iostream>
#include"functions.h"
using namespace std;
int main()
{
    int i,size,n;

    cout << "array size=";
    cin>>size;
    int array[size];
    cout << "array "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>array[i];
    }

    ReverseArray(array,size);
    cout<<"Reverse array"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    cout<<"Rotate element=";
    cin>>n;
    RotateArray(array,size,n);
    cout<<"rotate array"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    int item,index;
    cout<<"Searching array"<<endl;
    cin>>item;
    index=SearchArray(array,size,item);
    if(index==-1)
    {
     cout<<"not found"<<endl;
    }
    else
    {


    cout<<"item at index="<<index<<endl;
    }
    SortArray(array,size);
    cout<<"sorted array"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    index=SortSearchArray(array,size,item);
    if(index==-1)
    {
     cout<<"not found"<<endl;
    }
    else
    {
        cout<<"item at index="<<index<<endl;
    }
    int first_term=0,last_term=size-1;
    cout<<"binary search"<<endl;
    index=BinarySearch(array,first_term,last_term,item);
    if(index==-1)
    {
     cout<<"not found"<<endl;
    }
    else
    {
        cout<<"item at index="<<index<<endl;
    }
    return 0;
}
