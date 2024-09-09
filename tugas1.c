#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int bilangan = 0;
    scanf ("%d", &bilangan);
    int hasilbilangan = bilangan % 2;
    if(hasilbilangan == 0){
        printf("Genap");
        
    }else{
        printf("Ganjil");
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
return 0;
}