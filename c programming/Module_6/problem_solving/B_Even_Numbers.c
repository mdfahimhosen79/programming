#include<stdio.h>
int main()
{  int i,n;

   scanf("%d", &n);
   for ( i = 1; i <=n; i++)
   {
     if(n==1){
        printf("-1\n");
     }
     else if(i%2==0)
     {
      printf("%d\n", i);
     }
     


   }
    return 0;
}