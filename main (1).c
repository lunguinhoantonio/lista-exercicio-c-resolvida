#include <stdio.h>
#include <math.h>

int main()
{
    /* 1° Questão - Faça um código que 
    imprima um "Hello World!".
    
    printf("Hello World!");*/
    
    /* 2° Questão - Faça um código que 
    peça ao usuário digitar sua
    idade, e depois exiba-a.
    
    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("\nVocê tem %i anos de idade", idade);*/
    
    /* 3° Questão - Faça um código que 
    realize a soma de dois números,
    e depois imprima os números e o 
    resultado.
    
    int a1, a2;
    printf("Digite o primeiro valor: ");
    scanf("%i", &a1);
    printf("Digite o segundo valor: ");
    scanf("%i", &a2);
    printf("A soma de %i + %i dá %i", a1, a2, a1 + a2);*/
    
    /* 4° Questão - Faça um código que 
    o aluno receba quatro notas,
    realize a soma das notas e depois
    exiba a média delas.
    
    float n1, n2, n3, n4, media;
    printf("Digite a 1° nota: ");
    scanf("%f", &n1);
    printf("Digite a 2° nota: ");
    scanf("%f", &n2);
    printf("Digite a 3° nota: ");
    scanf("%f", &n3);
    printf("Digite a 4° nota: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("A média dessas notas é %.2f", media);*/
    
    /* 5° Questão - Faça um código que
    o usuário digite um número para
    saber se o número é ímpar, par ou
    0 e depois exiba o resultado. 
    
    int x;
    printf("Digite um número: ");
    scanf("%i", &x);
    if (x == 0) {
        printf("Esse número é o zero");
    }
    else if (x % 2 == 0) {
        printf("Esse número é par");
    }
    else {
        printf("Esse número é ímpar");
    }*/
    
    /* 6° Questão - Faça um código que
    imprima todos os números todos os
    números de 1 a 100, e quando chegar
    em 100, exibir todos os números de
    100 a 1.
    
    int contador = 1;
 
    for(contador; contador < 100; contador++){
        printf("%i\n", contador);
    }
    if (contador == 100) {
     for (contador; contador >= 1; contador--) {
        printf("%i\n", contador);
        }
    }*/

    /* 7° Questão - Faça um código que
    peça ao usuário digitar um número,
    e realizar uma soma de todos os
    números entre 1 até o número
    fornecido pelo usuário, e exiba o
    resultado.
    
    int a1 = 1;
    int ultimoTermo, somaDosTermos;
    printf("Digite um número: ");
    scanf("%i", &ultimoTermo);
    somaDosTermos = ((a1 + ultimoTermo) * (ultimoTermo)) / 2;
    printf("%i", somaDosTermos);*/
    
    /* 8° Questão - Faça um código que
    imprima 10 vezes, começando do 1,
    e cada vez que imprimir, multiplique
    por 2.
    
    int value = 1;
    for (int x = 1; x <= 10; x++) {
        printf("%i\n", value);
        value *= 2;
    }*/
    
    /* 9° Questão - Faça um código que
    leia os números inteiros do usuário
    e continue somando esses números até
    que o usuário digite 0. Quando 0 for
    digitado, o programa deve exibir a
    soma total de todos os números inse-
    ridos.
    
    int a;
    int resultado = 0;
    
    do {
        printf("A soma dos numeros atualmente e: %i\n", resultado);
        printf("Digite 0 para fechar o programa: ");
        scanf("%i", &a);
        resultado += a;
    }
    while (a != 0);*/
    
    /* 10° Questão - Faça um código que
    peça ao usuário para digitar um número
    inteiro positivo. Se o usuário digitar
    um número negativo ou zero, o programa
    deve continuar pedindo até que um número
    positivo seja digitado.
    
    int numeroDigitado = 0;
    do {
        printf("Digite um número positivo: ");
        scanf("%i", &numeroDigitado);
    }
    while (numeroDigitado <= 0);*/
    
    /* 11° Questão - Faça um código que
    utilize a estrutura for que exiba a
    tabuada do 1 ao 9.
    
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int cont = 0; cont <= 10; cont++) {
        printf("%d x %d = %d \n", numero, cont, numero * cont);
    }*/
    
    /* 12° Questão - Faça um código que
    o usuário informe um número e exiba
    o seu antecessor e sucessor.
    
    int valor;
    printf("Digite um valor: ");
    scanf("%i", &valor);
    printf("Antecessor: %i", valor -= 1);
    printf("\nSucessor: %i", valor += 2);*/
    
    /* 13° Questão - Faça um código que
    leia um número inteiro de 1 a 7 e
    imprima o dia da semana correspondente
    a este número, isto é, domingo = 1,
    segunda-feira = 2... utilizando if/else.
    
    int dayWeek;
    
    printf("Digite um valor de 1 a 7: ");
    scanf("%i", &dayWeek);
    if (dayWeek == 1) {
        printf("Dia da Semana: Domingo");
    }
    else if (dayWeek == 2) {
        printf("Dia da Semana: Segunda-feira");
    }
    else if (dayWeek == 3) {
        printf("Dia da Semana: Terça-feira");
    }
    else if (dayWeek == 4) {
        printf("Dia da Semana: Quarta-feira");
    }
    else if (dayWeek == 5) {
        printf("Dia da Semana: Quinta-feira");
    }
    else if (dayWeek == 6) {
        printf("Dia da Semana: Sexta-feira");
    }
    else if (dayWeek == 7) {
        printf("Dia da Semana: Sábado");
    }
    else if (dayWeek < 1 || dayWeek > 7) {
        printf("DIGITE UM VALOR DE 1 A 7: ");
        scanf("%i", &dayWeek);
        if (dayWeek == 1) {
        printf("Dia da Semana: Domingo");
        }
        else if (dayWeek == 2) {
            printf("Dia da Semana: Segunda-feira");
        }
        else if (dayWeek == 3) {
            printf("Dia da Semana: Terça-feira");
        }
        else if (dayWeek == 4) {
            printf("Dia da Semana: Quarta-feira");
        }
        else if (dayWeek == 5) {
            printf("Dia da Semana: Quinta-feira");
        }
        else if (dayWeek == 6) {
            printf("Dia da Semana: Sexta-feira");
        }
        else if (dayWeek == 7) {
            printf("Dia da Semana: Sábado");
        }
    }
    else {
        printf("Insira um valor válido!");
    }*/
    
    /* 14° Questão - Faça o mesmo código que
    antes porém usando switch case.
    
    int dayWeek;
    
    printf("Digite um valor de 1 a 7: ");
    scanf("%i", &dayWeek);
    switch (dayWeek) {
        case 1:
        printf("Dia da Semana: Domingo");
        break;
        case 2:
        printf("Dia da Semana: Segunda-feira");
        break;
        case 3:
        printf("Dia da Semana: Terça-feira");
        break;
        case 4:
        printf("Dia da Semana: Quarta-feira");
        break;
        case 5:
        printf("Dia da Semana: Quinta-feira");
        break;
        case 6:
        printf("Dia da Semana: Sexta-feira");
        break;
        case 7:
        printf("Dia da Semana: Sábado");
        break;
        default:
        printf("Insira um valor válido!");
    }*/
    
    /* 15° Questão - Faça um código que
    peça ao usuário digitar dois números
    e usando switch, escolher um dos 4
    operadores matemáticos (+, -, *, /)
    para fazer o cálculo desejado e exiba
    o resultado.
    
    int num1, num2, choice;
    
    printf("Digite o primeiro valor: ");
    scanf("%i", &num1);
    printf("Digite o segundo valor: ");
    scanf("%i", &num2);
    printf("Escolha uma das operações matemáticas");
    printf("\n 1. Adição");
    printf("\n 2. Subtração");
    printf("\n 3. Multiplicação");
    printf("\n 4. Divisão");
    printf("\n: ");
    scanf("%i", &choice);
    switch (choice) {
        case 1:
        printf("resultado: %i", num1 + num2);
        break;
        case 2:
        printf("resultado: %i", num1 - num2);
        break;
        case 3:
        printf("resultado: %i", num1 * num2);
        break;
        case 4:
        printf("resultado: %i", num1 / num2);
        break;
        default:
        printf("Escolha uma opção válida!");
    }*/
    
    /* 16° Questão - Faça um código que
    peça dois números ao usuário e mostre
    qual o maior e qual o menor.
    
    int b1, b2, maior, menor;
    
    printf("Digite o primeiro valor: ");
    scanf("%i", &b1);
    printf("Digite o segundo valor: ");
    scanf("%i", &b2);
    if (b2 > b1) {
        maior = b2;
        menor = b1;
    } else if (b2 < b1) {
        maior = b1;
        menor = b2;
    }
    else {
        maior = b1;
        menor = b2;
    }
    printf("O maior número foi %i", maior);
    printf("\nO menor número foi %i", menor);*/
    
    /* 17° Questão - Faça um código que
    peça dois números ao usuário, e depois
    realize as 4 operações entre esses números
    e exiba cada resultado da respectiva
    operação.
    
    int number1, number2;
    
    printf("Digite o primeiro valor: ");
    scanf("%i", &number1);
    printf("Digite o segundo valor: ");
    scanf("%i", &number2);
    
    printf("\nAdição: %i", number1 + number2);
    printf("\nSubtração: %i", number1 - number2);
    printf("\nMultiplicação: %i", number1 * number2);
    printf("\nDivisão: %i", number1 / number2);*/
    
    /* 18° Questão - Faça um código que
    peça um número ao usuário e armazene
    ele na variável x. Depois peça outro
    número e armazene na variável y. Mostre
    esses números. Em seguida, faça com que
    x passe a ter o valor de y e vice-versa.
    Dica: você vai precisar usar outra variável.
    
    int x, y, ponte;
    
    printf("Digite o primeiro valor: ");
    scanf("%i", &x);
    printf("Digite o segundo valor: ");
    scanf("%i", &y);
    
    printf("Antes da troca");
    printf("\nvalor de x: %i", x);
    printf("\nvalor de y: %i", y);
    printf("\n--------------------------");
    
    ponte = x;
    x = y;
    y = ponte;
    
    printf("\nDepois da troca");
    printf("\nvalor de x: %i", x);
    printf("\nvalor de y: %i", y);*/
    
    /* 19° Questão - Faça um código que
    calcule a área de um círculo. O raio
    deve ser fornecido pelo usuário. Área
    do círculo = pi.r²
    
    float raio, circleArea;
    float pi = 3.1415265;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    raio = pow(raio, 2);
    circleArea = pi * raio;
    printf("Área do círculo: %f", circleArea);*/
    
    /* 20° Questão - Faça um código que
    resolva uma equeção quadrática da
    forma ax² + bx + c = 0 utilizando a
    fórmula de Bhaskara. O código deve
    solicitar ao usuário os valores de a,
    b e c, e calcular as raízes da equação
    (se existirem).
    
    int a, b, c, x1, x2, resultB, result4ac, resultDelta,result2a;
    printf("Digite o valor de a: \n");
    scanf("%i", &a);
    printf("Digite o valor de b: \n");
    scanf("%i", &b);
    printf("Digite o valor de c: \n");
    scanf("%i", &c);
    
    resultB = b * b;
    result4ac = 4 * a * c;
    resultDelta = resultB - result4ac;
    result2a = 2 * a;
    
    x1 = (b * -1 + sqrt(resultDelta)) / result2a;
    
    x2 = (b * -1 - sqrt(resultDelta)) / result2a;
    
    printf("%i\n", x1);
    printf("%i\n", x2);*/
    
    
    return 0;
}
