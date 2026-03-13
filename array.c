#include <stdio.h>
int main() {
    int myNumbers[] = {25, 50, 75, 100};
    int i;
    int length= sizeof(myNumbers);
    for (i=0;i<4;i++){
        printf("%d\n",myNumbers[i]);
    }
    
    printf("the length of the array is: %d",length);
    return 0;

}