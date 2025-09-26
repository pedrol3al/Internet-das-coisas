#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mes, dia;

    printf("Insira o número do seu mês de nascimento (1-12): ");
    scanf("%d", &mes);

    printf("Insira o dia do nascimento: ");
    scanf("%d", &dia);

    //  Validação de mês
    if (mes < 1 || mes > 12) {
        printf("Mês inválido! Digite um valor entre 1 e 12.\n");
        return 0;
    }

    //  Validação de dia
    if (dia < 1) {
        printf("Dia inválido! O dia não pode ser menor que 1.\n");
        return 0;
    }

    // Verificação dos dias máximos de cada mês
    int diasNoMes;
    switch (mes) {
        case 2:
            diasNoMes = 29; // fevereiro (não estamos validando ano bissexto)
            break;
        case 4: case 6: case 9: case 11:
            diasNoMes = 30; // meses com 30 dias
            break;
        default:
            diasNoMes = 31; // meses com 31 dias
    }

    if (dia > diasNoMes) {
        printf("Dia inválido! O mês %d tem no máximo %d dias.\n", mes, diasNoMes);
        return 0;
    }

    // 🔎 Cálculo do signo
    switch (mes) {
        case 1: // Janeiro
            if (dia >= 21)
                printf("Seu signo é Aquário\n");
            else
                printf("Seu signo é Capricórnio\n");
            break;

        case 2: // Fevereiro
            if (dia >= 19)
                printf("Seu signo é Peixes\n");
            else
                printf("Seu signo é Aquário\n");
            break;

        case 3: // Março
            if (dia >= 21)
                printf("Seu signo é Áries\n");
            else
                printf("Seu signo é Peixes\n");
            break;

        case 4: // Abril
            if (dia >= 21)
                printf("Seu signo é Touro\n");
            else
                printf("Seu signo é Áries\n");
            break;

        case 5: // Maio
            if (dia >= 21)
                printf("Seu signo é Gêmeos\n");
            else
                printf("Seu signo é Touro\n");
            break;

        case 6: // Junho
            if (dia >= 21)
                printf("Seu signo é Câncer\n");
            else
                printf("Seu signo é Gêmeos\n");
            break;

        case 7: // Julho
            if (dia >= 23)
                printf("Seu signo é Leão\n");
            else
                printf("Seu signo é Câncer\n");
            break;

        case 8: // Agosto
            if (dia >= 23)
                printf("Seu signo é Virgem\n");
            else
                printf("Seu signo é Leão\n");
            break;

        case 9: // Setembro
            if (dia >= 23)
                printf("Seu signo é Libra\n");
            else
                printf("Seu signo é Virgem\n");
            break;

        case 10: // Outubro
            if (dia >= 23)
                printf("Seu signo é Escorpião\n");
            else
                printf("Seu signo é Libra\n");
            break;

        case 11: // Novembro
            if (dia >= 22)
                printf("Seu signo é Sagitário\n");
            else
                printf("Seu signo é Escorpião\n");
            break;

        case 12: // Dezembro
            if (dia >= 22)
                printf("Seu signo é Capricórnio\n");
            else
                printf("Seu signo é Sagitário\n");
            break;
    }

    return 0;
}
