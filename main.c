#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int q1() {
    float temp;

    printf("Digite a tempatura atual: ");
    scanf("%f", &temp);

    if (temp < 18) {
        printf("Está frio!");
    } else if ((temp >= 18) && (temp <= 28)){
        printf("Temperatura agradavel");
    } else {
        printf("Esta quente!");
    }

    return 0;
}

int q2() {
    int n1, n2, op;

    printf("Digite o primeiro numero");
    scanf("%d", &n1);
    printf("Digite o segundo numero");
    scanf("%d", &n2);
    printf("Digite a opcao: 1 para +\n2 para -\n3 para *\n4 para /\n 5 para modulo");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("%d + %d = %d", n1, n2, n1 + n2);
        break;
    case 2:
        printf("%d - %d = %d", n1, n2, n1 - n2);
        break;
    case 3:
        printf("%d * %d = %d", n1, n2, n1 * n2);
        break;
    case 4:
        printf("%d / %d = %d", n1, n2, n1 / n2);
        break;
    case 5:
        printf("%d % %d = %d", n1, n2, n1 % n2);
        break;
    default:
        printf("Opcao invalida");
        break;
    }

    return (0);
}

int q3(){
    float p1, p2, p3, nf, tmp;

    printf("Digite a primeira nota ");
    scanf("%f", &p1);
    printf("Digite a segunda nota ");
    scanf("%f", &p2);
    printf("Digite a terceira nota ");
    scanf("%f", &p3);

    if (p1 >= p2) {
        tmp = p2;
    } else {
        tmp = p1;
    }

    if (tmp > 3) {
        tmp = p3;
    }

    nf = ((p1 + p2 + p3) - tmp) / 2;

    if (nf >= 6) {
        printf("Sua nota final e: %0.2f - Aprovado", nf);
    } else if (nf < 4) {
        printf("Sua nota final e: %0.2f - Reprovado", nf);
    } else {
        printf("Sua nota final e: %0.2f - IFA", nf);
    }



    return 0;
}

int num_pseudo(){
    srand(time(NULL));
    return (rand() % 6); //retorna um numero pseudo-aleatório de 0 a 5
}

int q4() {
    char userOp, iaOp;
    char userStatus[6]; 
    char iaStatus[6];
    int userNum, iaNum, soma;

    printf("Escolha [p] para 'Par' e [i] para 'impar': ");
    scanf("%c", &userOp);

    if (userOp == 'p') {
        iaOp = 'i';
        strcpy(userStatus, "PAR");
        strcpy(iaStatus, "IMPAR");
    } else {
        iaOp = 'p';
        strcpy(userStatus, "IMPAR");
        strcpy(iaStatus, "PAR");
    }

    printf("Eu sou %s e o computador e %s\n\n",  userStatus,  iaStatus);
    printf("Vamos escolher um numero ao mesmo tempo.\nDigite um numero entre 0 e 5: ");
    scanf("%d", &userNum);

    if (userNum >= 0 && userNum <=5) {
        iaNum = num_pseudo();
        soma = userNum + iaNum;
        if(soma % 2 == 0 && userOp == 'p') {
            printf("%d mais %d e igual a %d\n%d e PAR\nEu ganhei", userNum, iaNum, soma, soma);
        } else if (soma % 2 != 0 && userOp == 'i'){
            printf("%d mais %d e igual a %d\n%d e IMPAR\nEu ganhei", userNum, iaNum, soma, soma);
        } else if (soma % 2 == 0 && iaOp == 'p'){
        	printf("%d mais %d e igual a %d\n%d e PAR\nO computador ganhou", userNum, iaNum, soma, soma);
		} else {
			printf("%d mais %d e igual a %d\n%d e IMPAR\nO computador ganhou", userNum, iaNum, soma, soma);
		}
    } else {
        printf("Numero incorreto");
    }
	
	return 0;

}

int main() {
    //q1();
    //printf("\n");
    //q2();
    //printf("\n");
    //q3();
    //printf("\n");
    //q4();
    //printf("\n");


    return 0;
}
