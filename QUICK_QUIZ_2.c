#include<stdio.h>
int square();
int main(){
    printf("THIS IS THE PROGRAMME TO CALCULATE THE LENGTH OF A SQUARE USING FUNCTION\n");
    int sum=square();
    printf("THE FOLLOWING FUNCTION RETURNS A VALUE %d\n",sum);
}
int square(){
  
   int result,length;
   printf("GIVE THE LENGTH OF A CIRCLE\n");
   scanf("%d",&length);

    result=    length*4;


  return result;

}