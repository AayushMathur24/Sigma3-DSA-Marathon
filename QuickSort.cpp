#include <iostream>
using namespace std;

int part(int arr[],int low,int high)
{
    int piv = arr[low];
    int i = low-1,j = high+1;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<piv);
        
        do{
            j--;
        }while(arr[j]>piv);
        
        if(i>=j)
           return j;
        swap(arr[i],arr[j]);
    }
}

void sorts(int arr[],int low,int high)
{
    if(low<high)
    {
    int p = part(arr,low,high);
    sorts(arr,low,p);
    sorts(arr,p+1,high);
    }
}

void ans(int arr[],int n)
{
   for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }    
}

int main()
{
    int num;
    cout<<"Enter number of elements : ";
    cin>>num;
    int arr[num];
    cout<<"Enter elements : ";
    for(int i=0;i<num;i++)
        cin>>arr[i];
    cout<<"Array after sorting : ";
    sorts(arr,0,num-1);
    ans(arr,num);
    return 0;
}
