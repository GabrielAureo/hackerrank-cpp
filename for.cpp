#include <iostream>

void handle_number(int n){
    if(n == 1){
        printf("one");
    }else if(n == 2){
        printf("two");
    }else if (n == 3) {
        printf("three");
    }else if (n == 4) {
        printf("four");
    }else if (n == 5) {
        printf("five");
    }else if( n== 6){
        printf("six");
    }else if (n == 7) {
        printf("seven");
    }else if (n == 8) {
        printf("eight");
    }else if (n == 9) {
        printf("nine") ;
    }else if(n > 9){
        return;
    }
    printf("\n");
}

void handle_parity(int n){
    if(n > 9){
        if(n % 2){
            printf("odd");
        }else{
            printf("even");
        }
        printf("\n");
    }
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    for( int i = a; i <= b; i++){
        handle_number(i);
        handle_parity(i);
    }
    return 0; 
}