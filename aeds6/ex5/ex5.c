#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct Horario validarHorario(int hora, int minuto, int segundo) {
    struct Horario horarioValido;

    if (hora >= 0 && hora < 24 && minuto >= 0 && minuto < 60 && segundo >= 0 && segundo < 60) {
        horarioValido.hora = hora;
        horarioValido.minuto = minuto;
        horarioValido.segundo = segundo;
    } else {
        horarioValido.hora = 0;
        horarioValido.minuto = 0;
        horarioValido.segundo = 0;
    }

    return horarioValido;
}

struct Horario somarHorarios(struct Horario horario1, struct Horario horario2) {
    struct Horario resultado;

    resultado.segundo = horario1.segundo + horario2.segundo;
    
    if (resultado.segundo >= 60) {
        resultado.segundo -= 60;
        resultado.minuto = 1;
    } else {
        resultado.minuto = 0;
    }

    resultado.minuto += horario1.minuto + horario2.minuto;

    if (resultado.minuto >= 60) {
        resultado.minuto -= 60;
        resultado.hora = 1;
    } else {
        resultado.hora = 0;
    }

    resultado.hora += horario1.hora + horario2.hora;

    if (resultado.hora >= 24) {
        resultado.hora %= 24;
    }

    return resultado;
}

int main() {
    int hora, minuto, segundo;
    struct Horario horario1, horario2;

    printf("Digite o primeiro horário (hh:mm:ss): ");
    scanf("%d:%d:%d", &horario1.hora, &horario1.minuto, &horario1.segundo);
    
    printf("Digite o segundo horário (hh:mm:ss): ");
    scanf("%d:%d:%d", &horario2.hora, &horario2.minuto, &horario2.segundo);

    struct Horario horario = validarHorario(hora, minuto, segundo);

    if (horario.hora == 0) {
        printf("Horario invalido\n");
    } else {
        printf("Horario valido: %02d:%02d:%02d\n", horario.hora, horario.minuto, horario.segundo);
    }

    return 0;
}

