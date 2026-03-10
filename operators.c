# include <stdio.h>
#include <stdbool.h>
int main(){
    int number1=3,number2=4;
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    /*arithmatic operators*/
    printf("%d\n",number1+number2);
    printf("%d\n",number1-number2);
    printf("%d \n",number1*number2);
    printf("%d \n",number1/number2);
    printf("%d\n",number1%number2);

    printf("comparison operators\n");
    printf("%d\n",number1>number2);
    printf("%d\n",number1==number1);
    printf("%d\n",number1>=number1);

    printf("logic operator\n");
    printf("%d\n", number1<=number2 && number1!=number2);
    printf("%d\n", !(number1<=number2 && number1!=number2));
    printf("%d",isProgrammingFun);



    return 0;

    
}