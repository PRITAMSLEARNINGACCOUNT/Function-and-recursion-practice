#include<stdio.h>
float calculation(float mass);
int main(){
    float mass;
    printf("GIVE THE MASS OF A BODY \n");//IT IS IN KG
    scanf("%f",&mass);
    printf("SO THE FORCE OF ATTRACTION IS %f\n",calculation(mass));//IT IS IN NEWTON
}
float calculation(float mass){
    return mass *9.8;
}
//THE WHOLE PROGRAMME IS WRITTEN ACCORDING TO SI UNIT OF MASS ANF FORCE ONLY