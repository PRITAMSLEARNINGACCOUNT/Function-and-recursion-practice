#include<stdio.h>
int sum(int a);
int main(){
    int a;
 printf("GIVE A VALUE TO CALCULATE SUM\n");
 scanf("%d",&a);
 if (a%2==0)
 {
     printf("THE SUM OF EVEN NUMBERS IS %d\n",sum(a));
 }
 else
 {
    printf("THE SUM OF ODD NUMBERS IS %d\n",sum(a));
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