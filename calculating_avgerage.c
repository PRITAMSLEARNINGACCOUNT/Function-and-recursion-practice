#include<stdio.h>
float numbers(float x,float y,float z);
int main(){
    float a,b,c;
    printf("GIVE THE FIRST NUMBER\n");
    scanf("%f",&a);
    printf("GIVE THE SECOND NUMBER\n");
    scanf("%f",&b);
    printf("GIVE THE THIRD NUMBER\n");
    scanf("%f",&c);
     printf("SO THE AVERAGE OF THREE NUMBER IS %f\n",numbers(a,b,c));


}

float numbers(float x,float y,float z){
    float result;
    result=(x+y+z)/3;
    return result;

}
