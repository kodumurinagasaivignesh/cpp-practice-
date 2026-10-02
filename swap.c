#include <stdio.h>

void swap(int a,int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:");
    printf("a = %d,b = %d", a, b);

}
void main(){
    int x,y;
    swap(2,3);
}
