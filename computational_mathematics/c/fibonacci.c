#include <stdio.h>

int main(){
    int v1, v2, vN, termos;
    v1 = 1;
    v2 = 0;

    printf("Quantos termos: \n");
    scanf("%d", &termos);

    printf("\n");

    for(int i = 0;i < termos;i++){
        printf("%d\n", v1);
        vN = v1 + v2;
        v2 = v1;
        v1 = vN;
    }

    return 0;
}
