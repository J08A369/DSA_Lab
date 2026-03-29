#include<iostream>
using namespace std;

int main()
{
    int a[]={2,5,8,12,16,23,38,56,72,91};
    int target=23;
    int start=0,end=9,mid;
    int Not_found=1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==target)
        {
            cout<<"Found";
            Not_found=0;
            break;
        }
            
        else if(a[mid]<target)
        {
         start=mid+1;
        }
        else if(a[mid]>target)
        {
          end=mid-1;
        }
    }
    if(Not_found==1)
    {
        cout<<"Not_found";
    }
    return 0;
}
