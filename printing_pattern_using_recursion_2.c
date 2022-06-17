#include<stdio.h>
void pattern(int n);
void pattern2(int a);

int main(){
    int give_lines;
    printf("GIVE HOW MUCH LINE DO YOU WANT TO PRINT\n");
    scanf("%d",&give_lines);
    pattern(give_lines);
 pattern2(give_lines);
}
void pattern(int n){
    int a=n;
    if(n==1){
        printf("%d\n",a);
         
    }
    else{
        for (int i = 0; i < (2*n-1); i++)
        {
            printf("%d",a);
        }
        printf("\n");
        a--;
        pattern(n-1);
    }
   

}//THIS FUNCTION IS FOR REVERSE PATTERN.
void pattern2(int a){
    int n=a;
    if (a==1)
    {
        printf("%d\n",n);
    }
    else
    {
        pattern2(a-1);
        for (int i = 0; i < (2*a-1); i++)
        {
            printf("%d",n);
        }
        printf("\n");
    }
    

    
}//THIS FUNCTION IS FOR FORWORD PATTERN.
