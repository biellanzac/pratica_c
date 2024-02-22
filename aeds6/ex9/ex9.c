#include <stdio.h>

struct Data {
    int ano;
    int mes;
    int dia;
};

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct DataHorario {
    struct Data data;
    struct Horario horario;
};

