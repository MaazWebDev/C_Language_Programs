#include <stdio.h>
#define LOWER 0
#define UPPER 30
#define STEP 20
int main(void){
    int fahr;

    for( fahr = LOWER ; fahr <= UPPER ; fahr += STEP){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}