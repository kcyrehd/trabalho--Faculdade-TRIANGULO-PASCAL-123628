
#include <stdio.h>

int main() {
    int linhas;
    int triangulo[30][30] = {0};

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    if (linhas < 1 || linhas > 30) {
        printf("Digite um valor entre 1 e 30.\n");
        return 1;
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangulo[i][j] = 1;
            } else {
                triangulo[i][j] =
                    triangulo[i - 1][j - 1] +
                    triangulo[i - 1][j];
            }

            printf("%d ", triangulo[i][j]);
        }

        printf("\n");
    }

    return 0;
}
