#include<stdio.h>
int recursion(int a);
        int main(){
            int x,b;
            printf("GIVE A VALUE TO DO A FACTORIAL\n");
            scanf("%d",&x);
            b=recursion(x);
            printf("PRINT THE MULTIPIED VALUE OF THE GIVEN FACTORIAL %d \n",b);
        }
        int recursion(int a){
        if (a==0 || a==1)
        {
            return 1;
        }
        else
        {
            return a*recursion(a-1);
        }
        
}