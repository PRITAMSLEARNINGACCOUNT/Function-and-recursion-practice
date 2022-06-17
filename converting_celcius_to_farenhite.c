#include<stdio.h>
float convertion(float n);
int main(){
float a;
printf("GIVE THE CELCIUS HERE\n");
scanf("%f",&a);
printf("SO THE FARENHITE IS %f\n",convertion(a));
return 0;
}
float convertion(float n){
    float result;
    result=((n * 9)/5) + 32;
    return result;
}
