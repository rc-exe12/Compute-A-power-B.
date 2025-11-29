#include<stdio.h>
int a_b(int,int);
int main(){
    int a,b,power;
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    power=a_b(a,b);
    printf("Power of %d to the %d is %d", a, b, power);
    return 0;
}
int a_b(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return a*a_b(a,b-1);
    }

}
