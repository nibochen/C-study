#include<stdio.h>
#define M 10
int main(){
    int a[M]={1,2,3,4,45,344,776,884,900,901};
    int n,low,high,mid,found;
    low=0;
    high=M-1;
    found=0;
    scanf("%d",&n);
    while (low<=high)
    {
        mid=(low+high)/2;
        if (a[mid]==n)
        {
            found=1;
            printf("%d",mid);
    
            break;
        }else
        {
            if (a[mid]<n)
            {
                low=mid+1;
                
            }else
            {
                if (a[mid]>n)
                {
                    high=mid-1;
                    
                }else
                {
                    found=0;
                    
                }
                
                
            }
            
            
        }
        
        
    }
    
    if (found==0)
        printf("nmsl");

    
} 