#include <stdio.h>
#include <locale.h>

char userDataText (char n[99], char p[99]) {
    char opt_2;

    printf("Olá, %s\n", n);
    printf("Sua senha está oculta! Quer revela-la? (a/f): ");
    scanf("%c", &opt_2);

    if (opt_2 == 'a') {
        printf("Sua senha é: %s", p);
    } else if (opt_2 == 'f') {
        printf("Sua senha vai permanecer em sigilo...");
    }
}

int userDataNum(int a) {
    printf("Você tem %d anos!\n", a);
}

int main() {
    int age;
    char name[99], password[99], go[3];
    char opt;

    char function_one;
    int function_two;

    printf("Bem-vindo ao sistema do cliente! Vamos as configuraçoes? (y/n) ");
    scanf("%c", &opt);

    if (opt == 'y') {

    
        printf("Perfeito! Aqui está o menu:\n ");
        printf("Informe seu nome:\n ");
        scanf("%s", name);

        printf("Informe sua idade:\n ");
        scanf("%d", &age);

        printf("Agora informe sua senha (Somente caracteres!):  ");
        scanf("%s", password);
    } else if (opt == 'n') {
        printf("Você precisa configura o sistema para iniciar o seu dispositivo! Tente novamente com (go!): ");
        scanf("%s", go);
        if (go == "go!")
            printf("Perfeito! Aqui está o menu:\n ");
            printf("Informe seu nome:\n ");
            scanf("%s", name);

            printf("Informe sua idade:\n ");
            scanf("%d", &age);

            printf("Agora informe sua senha (Somente caracteres!):  ");
            scanf("%s", password);
    }

    function_one = (name, password);
    function_two = (age);
    return 0;
}
