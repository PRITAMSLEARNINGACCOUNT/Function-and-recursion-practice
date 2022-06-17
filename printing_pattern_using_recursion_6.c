#include<stdio.h>
void pattern2(int a);
int main(){
    int give_lines;
    printf("GIVE HOW MUCH LINE DO YOU WANT TO PRINT\n");
    scanf("%d",&give_lines);
    pattern2(give_lines);
    }
    void pattern2(int a){
    if (a==1)
    {
        printf("*\n");
    }
    else
    {
        pattern2(a-1);
        for (int i = 0; i < (2*a-1); i++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    
}//forword pattern.