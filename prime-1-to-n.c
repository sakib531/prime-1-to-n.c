#include<stdio.h>

int main(){
    int a,b,n;
    printf("enter the value : \n");
    scanf("%d" ,&n);
    for(a=2;a<=n;a++){
        for(b=2;b<a;b++){
            if(a%b==0){
                break;
            }
        }
        if(b==a){
            printf("%d\n",b);
        }
    }
    return 0;
}
