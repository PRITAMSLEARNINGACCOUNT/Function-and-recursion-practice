#include<stdio.h>
void pattern2(int a);
int main(){
    int give_lines;
    printf("GIVE HOW MUCH LINE DO YOU WANT TO PRINT\n");
    scanf("%d",&give_lines);
    pattern2(give_lines);
}
void pattern2(int a){
    int n=1;
    if (a==1)
    {
        printf("%d\n",n);
    }
    else
    {
        pattern2(a-1);
        for (int i = 1; i <= a; i++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
    

    
}