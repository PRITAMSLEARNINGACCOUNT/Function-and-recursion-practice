#include<stdio.h>
void pattern(int n);
int main(){
    int give_lines;
    printf("GIVE HOW MUCH LINE DO YOU WANT TO PRINT\n");
    scanf("%d",&give_lines);
    pattern(give_lines);
    }
void pattern(int n){
    int a=n;
    if(n==1){
        printf("%d\n",a);
         
    }
    else{
        for (int i = 1; i <=n; i++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
        
        pattern(n-1);
    }
   

}