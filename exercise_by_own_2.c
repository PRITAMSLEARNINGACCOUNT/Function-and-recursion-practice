#include<stdio.h>
#include<math.h>
int main(){
    int square_length;
    printf("GIVE THE LENGTH OF THE SQUARE\n");

    scanf("%d",&square_length);
    printf("SO THE AREA OF THE SQUARE IS %f\n",pow(square_length,2));
    return 0;
    
}