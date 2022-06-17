#include<stdio.h>
int sum(int a);
int main(){
    int a;
    printf("GIVE A VALUE TO CALCULATE SUM\n");
    scanf("%d",&a);
    printf("SO THE VALUE OF THE NUMBER %d IS %d\n",a,sum(a));

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