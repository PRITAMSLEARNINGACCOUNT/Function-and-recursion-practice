#include<stdio.h>
int calculation(int element);
int main(){
    int element;
    printf("GIVE THE ELEMENT\n");
    scanf("%d",&element);
    printf("SO THE NUMBER OF GIVEN ELEMENT IS %d\n",calculation(element));
}
int calculation(int element){
    int result;
    if (element==1)
    {
        return 1;
    }
    else if(element==0)
    {
        return 0;
    }
    else
    {
      result=calculation(element-1)+calculation(element-2);
    }
    return result;
  
}
