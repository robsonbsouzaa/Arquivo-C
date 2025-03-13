#include <stdio.h>
#include<locale.h>
int main (){
    setlocale(LC_ALL,"");
    int n1, n2, n3, res;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &n3);
    res = (n1+n2)/n3;
    printf("O resultado e %d",res);
    return 0;
}
