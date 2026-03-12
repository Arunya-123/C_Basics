# include <stdio.h>
int main(){
    int num =23.7;
    float numm= 45.7;
    int age=34;
    if (num>numm){
        printf("you are correct");
    }else if (num==numm) {
        printf("please check the inputs");
    }else{
        printf("hai");
    }
    (age>=18)? printf("u r allowed"):printf(" u are not allowed");
    
    /* loop statement/*

    while (num<100){
        printf("hai\n");
        num++;
    } 

    do {
        printf("haloo\n");
        num++;
      }
      while (num<100);

    for (num=1;num>10;num++){
        printf("%d\n", num);
    }
    
    return 0;
}
