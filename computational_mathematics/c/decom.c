#include <stdio.h>
#include <math.h>

int main(){

    int num[] = {1,9,5,7,5,4};
    int len = sizeof(num) / sizeof(num[0]);
    int pos = len-1;

    for(int i = pos; i >-1;i--){
        int opc = num[i] * pow(10,i);
        printf("%d * 10^%d = %d\n",num[pos], i,opc);
        pos--;
    }
    return 0;
}
