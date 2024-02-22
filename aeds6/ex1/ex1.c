#include <stdio.h>

struct Data {
    int ano;
    int mes;
    int dia;
};

struct Data validarData(int ano, int mes, int dia) {
    struct Data dataValida;
    int maxDias;

    if (ano >= 0 && mes >= 1 && mes <= 12) {
            maxDias = 31;
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            maxDias = 30;
        } else{
        	maxDias = 28;
		}

        if (dia >= 1 && dia <= maxDias) {
            dataValida.ano = ano;
            dataValida.mes = mes;
            dataValida.dia = dia;
        } else {
            dataValida.ano = 0;
            dataValida.mes = 0;
            dataValida.dia = 0;
        }
    }

    return dataValida;
}


int diferencaEntreDatas(struct Data data1, struct Data data2) {
    
    if (data1.ano < data2.ano || (data1.ano == data2.ano && data1.mes < data2.mes) || 
        (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia < data2.dia)) {
        
        struct Data temp = data1;
        data1 = data2;
        data2 = temp;
    }

    int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int diferencaDias = 0;

    while (data1.ano != data2.ano || data1.mes != data2.mes || data1.dia != data2.dia) {
        data1.dia++;
        diferencaDias++;

        if (data1.dia > diasNoMes[data1.mes - 1]) {
            data1.dia = 1;
            data1.mes++;

            if (data1.mes > 12) {
                data1.mes = 1;
                data1.ano++;
            }
        }
    }

    return diferencaDias;
}

int main() {
    int ano, mes, dia;
    printf("Digite o ano, mes e dia:");
    scanf("%d %d %d", &ano, &mes, &dia);

    struct Data data1 = validarData(ano, mes, dia);

    int diffDias = diferencaEntreDatas(data1, data2);

    return 0;
}

