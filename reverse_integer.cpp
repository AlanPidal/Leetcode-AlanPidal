#include<stdio.h>

int output=0,multiplicador=1,cifras=-1;
int reverse(int x){
    int i,j,modul,multiplicador=1,acum=0,cifras=0,neg=0;
    if(x<0){
        neg=1;
        x*=-1;
    }
    for(i=x;i/10>0;i/=10){
        multiplicador*=10;
    }
    for(i=x;i>0;i/=10){
        modul=i%10;
        acum+=modul*multiplicador;
        multiplicador/=10;
    }
    if(neg==1) acum*=-1;
    printf("%d\n",acum);
    return acum;
}

int main(){
    int num;
    scanf("%d",&num);
    reverse(num);
    return 0;
}