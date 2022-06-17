#include<stdio.h>
int square(int length);
int main(){
    printf("THIS IS THE PROGRAMME TO CALCULATE THE LENGTH OF A SQUARE USING FUNCTION\n");
    int sum=square(100);
    printf("THE FOLLOWING FUNCTION RETURNS A VALUE %d\n",sum);
}
int square(int length){
  
   int result;
   //printf("GIVE THE LENGTH OF A CIRCLE\n");
   //scanf("%d",&length);

    result=    length*4;


  return result;

}