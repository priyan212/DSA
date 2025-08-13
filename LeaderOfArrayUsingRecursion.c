#include <stdio.h>

void main() {
int a[] = {5,73,8,30,9,25,24};
    int n= sizeof(a)/4;
//    printf("%d",n);
    int L= a[n-1];
//    printf("%d",L);
int k= a[n];
    for(int i=n-1;i>0;i--)
    {
        if(k>a[i-1])
        {
         printf("%d is a leader \n",a[i]);
         k= a[i];
        }       
    }
}
