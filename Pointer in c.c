//5  POINTER IN C 

#include <stdio.h>

void update(int *a,int *b) {
    
    *a=*a+*b;
    *b=abs(*a-(2**b));  
}

int main() {
    int a,b;    
    
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
