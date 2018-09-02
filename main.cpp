#include<iostream>
using namespace std;
int setpivot(int l,int r,int *arr);
void quicksort(int *arr,int l, int r);
int main()
{
  int arr[9]={7,29,13,6,56,3,34,5,2};
  int l=0,r=8;
  quicksort(arr , l , r);
  for(l=0;l<9;l++)
  {
    cout<<arr[l]<<" ";
  }
  cout<<endl;
  system("pause");
  }
int setpivot(int l,int r,int *arr)
{
  int pivot=(l+r)/2;
  int a=0;
  while(l<=r)
  {
    if( pivot == l || a==0)
    {
      if(arr[pivot] > arr[r])
    {
      int temp=arr[pivot];
      arr[pivot]=arr[r];
      arr[r]=temp;
      pivot=r;
    }
     else if(arr[pivot] <= arr[r])
    {
      r--;
    }
    a++;
    }
    if(pivot==r || a==0)
    {
      if(arr[pivot] < arr[l])
    {
      int temp=arr[pivot];
      arr[pivot]=arr[l];
      arr[l]=temp;
      pivot=l;
    }
    else if(arr[pivot] >= arr[r])
    {
      l++;
    }
    a++;
  }
  
}
  return pivot;
}

void quicksort(int *arr,int l, int r)
{
  if(l<r)
  {
    int pivot=setpivot(l,r,arr);
    quicksort(arr , l , pivot-1);
    quicksort(arr , pivot+1, r);
  }
}