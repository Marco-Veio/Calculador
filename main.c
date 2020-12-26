#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int menu(void);
void adicao(void);
void subtracao(void);
void multiplicacao(void);
void divisao(void);
void radiciacao(void);
void potenciacao(void);
void fatorial(void);
void porcentagem(void);

int main()
{
    system("title Calculadora do Marco Véio");
    system("color F0");
    char sair;
    do{
        switch(menu()){
            case 0:adicao();break;
            case 1:subtracao();break;
            case 2:multiplicacao();break;
            case 3:divisao();break;
            case 4:radiciacao();break;
            case 5:potenciacao();break;
            case 6:fatorial();break;
            case 7:porcentagem();break;
            case 8:return 0;break;
        }
        printf("\n\nAperte enter para recome%car ou esc para sair!",-121);
        do{
            sair=getch();
        }while(sair!=13 && sair!=27);
    }while(sair==13);
}
int menu(void){
    const int tam=9;
    int e=0,er;
    char escolha[tam],move;
    do{
        system("cls");
        printf("Calculadora do Marco V%cio\n\n",-126);
        for(er=0;er<tam;er++)
            escolha[er]=' ';
        escolha[e]=254;
        printf("%c Adi%c%co\n%c Subtra%c%co\n%c Multiplica%c%co\n%c Divis%co\n%c Radicia%c%co\n%c Potencia%c%co\n%c Fatorial\n%c Porcentagem\n%c Sair\n",escolha[0],-121,-58,
        escolha[1],-121,-58,escolha[2],-121,-58,escolha[3],-58,escolha[4],-121,-58,escolha[5],-121,-58,escolha[6],escolha[7],escolha[8]);
        do{
            do{
                move=getch();
            }while(move!=-32 && move!=13 && move!=27 && move!='w' && move!='s' && (move<'1' && move>'9'));
            if(move==-32)
                move=getch();
        }while(move!='H' && move!='P' && move!='w' && move!='s' && move!=13 && move!=27 && (move<'1' && move>'9'));
        if(move>='1' && move<='9')
            e=move-49;
        switch(move){
            case 'w':
            case 'H':if(e>0) e--;else e=tam-1;break;
            case 's':
            case 'P':if(e<tam-1) e++;else e=0;break;
            case 27:e=tam-1;break;
        }
    }while(move!=13 && move!=27);
    system("cls");
    return e;
}
void adicao(void){
    float a,b;
    printf("Digite o primeiro valor: ");
    scanf("%f",&a);
    printf("Digite o segundo valor: ");
    scanf("%f",&b);
    system("cls");
    printf("(%.3f) + (%.3f) = (%.3f)",a,b,a+b);
}
void subtracao(void){
    float a,b;
    printf("Digite o primeiro valor: ");
    scanf("%f",&a);
    printf("Digite o segundo valor: ");
    scanf("%f",&b);
    system("cls");
    printf("(%.3f) - (%.3f) = (%.3f)",a,b,a-b);
}
void multiplicacao(void){
    float a,b;
    printf("Digite o primeiro valor: ");
    scanf("%f",&a);
    printf("Digite o segundo valor: ");
    scanf("%f",&b);
    system("cls");
    printf("(%.3f) * (%.3f) = (%.3f)",a,b,a*b);
}
void divisao(void){
    float a,b;
    printf("Digite o dividendo: ");
    scanf("%f",&a);
    printf("Digite o divisor: ");
    scanf("%f",&b);
    system("cls");
    printf("(%.3f) / (%.3f) = (%.3f)",a,b,a/b);
}
void radiciacao(void){
    float a,b;
    printf("Digite o radicando: ");
    scanf("%f",&a);
    printf("Digite o radical: ");
    scanf("%f",&b);
    system("cls");
    printf("(%.3f) raiz (%.3f) = (%.3f)",b,a,pow(a,1/b));
}
void potenciacao(void){
    float a,b;
    printf("Digite a base: ");
    scanf("%f",&a);
    printf("Digite o expoente: ");
    scanf("%f",&b);
    system("cls");
    printf("(%.3f) ^ (%.3f) = (%.3f)",a,b,pow(a,b));
}
void fatorial(void){
    int a,cont,resp;
    printf("Digite o valor: ");
    scanf("%d",&a);
    if(a>12)
        printf("O resultado %c muito grande! O valor m%cximo para eu calcular %c 12",-126,-96,-126);
    else{
        for (cont=a,resp=1;cont>1;resp*=cont,cont--){}
        printf("%d! = %d",a,resp);
    }
}
void porcentagem(void){
    float a,b;
    printf("Digite o valor: ");
    scanf("%f",&a);
    printf("Digite a porcentagem: ");
    scanf("%f",&b);
    system("cls");
    printf("(%.3f)%c de %.3f =  (%.3f)",b,37,a,a*b/100);
}
