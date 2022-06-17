#include<stdio.h>
int sum(int a);
int main(){
    int a,even=0;
 printf("GIVE A VALUE TO CALCULATE SUM\n");
 scanf("%d",&a);
 for (int  i = a; i >= even; i--)
 {
     if (i%2==0)
     {
         even=i;
         printf("THE SUMMATION OF ODD NUMBERS ARE %d\n",sum(even));
     }
     else
     {
         int odd=i;
         printf("THE SUMMATION OF ODD NUMBERS ARE %d\n",sum(odd));

     }
    
     
 }
}
int sum(int a){
    int result,r;
    if (a==2)
    {
       return 2;
    }
    else if (a==1)
    {
      return 1;
    }
    
    else
    {
        
        result=a+sum(a-2);
        
    }
    return result;
    
}