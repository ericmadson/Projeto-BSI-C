#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "siglas.h"

int siglasCmp (char *sigla) {
char AM[3] = "AM";
char AL[3] = "AL";
char AC[3] = "AC";
char AP[3] = "AP";
char BA[3] = "BA";
char CE[3] = "CE";
char ES[3] = "ES";
char GO[3] = "GO";
char MA[3] = "MA";
char MT[3] = "MT";
char MG[3] = "MG";
char MS[3] = "MS";
char PA[3] = "PA";
char PB[3] = "PB";
char PR[3] = "PR";
char PE[3] = "PE";
char PI[3] = "PI";
char RJ[3] = "RJ";
char RN[3] = "RN";
char RS[3] = "RS";
char RO[3] = "RO";
char RR[3] = "RR";
char SC[3] = "SC";
char SP[3] = "SP";
char SE[3] = "SE";
char TO[3] = "TO";
char DF[3] = "DF";

    if ((strcmp(sigla, AC) == 0) || (strcmp(sigla, AL) == 0) || (strcmp(sigla, AM) == 0) || (strcmp(sigla, AP) == 0) || (strcmp(sigla, BA) == 0) || (strcmp(sigla, CE) == 0) || (strcmp(sigla, ES) == 0) || (strcmp(sigla, GO) == 0) || (strcmp(sigla, MA) == 0) || (strcmp(sigla, MT) == 0) || (strcmp(sigla, MG) == 0) || (strcmp(sigla, MS) == 0) || (strcmp(sigla, PA) == 0) || (strcmp(sigla, PB) == 0) || (strcmp(sigla, PR) == 0) || (strcmp(sigla, PE) == 0) || (strcmp(sigla, PI) == 0) || (strcmp(sigla, RJ) == 0) || (strcmp(sigla, RN) == 0) || (strcmp(sigla, RS) == 0) || (strcmp(sigla, RO) == 0) || (strcmp(sigla, RR) == 0) || (strcmp(sigla, SC) == 0) || (strcmp(sigla, SP) == 0) || (strcmp(sigla, SE) == 0) || (strcmp(sigla, TO) == 0) || (strcmp(sigla, DF) == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}