#include <stdio.h>

int main(){
    int x , y, z, avr ;
    printf("___Average of Three Numbers___\n");
    printf("Enter three numbers : ");
    scanf("%d%d%d",&x,&y,&z);
    avr = (x+y+z)/3 ;
    printf("averae = %d",avr);
    
    return 0 ;
}