#include<stdio.h>
void pattern(int n);
int main(){
    int give_lines;
    printf("GIVE HOW MUCH LINE DO YOU WANT TO PRINT\n");
    scanf("%d",&give_lines);
    pattern(give_lines);
 
}
void pattern(int n){
    if(n==1){
        printf("*\n");
         
    }
    else{
        for (int i = 0; i < (2*n-1); i++)
        {
            printf("*");
        }
        printf("\n");
        pattern(n-1);
    }
   

}//reverse pattern