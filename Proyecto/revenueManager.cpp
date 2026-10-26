#include <iostream>
#include "RevenueManager.h"
using namespace std;

RevenueManager::RevenueManager(double tBase) : tarifaBase(tBase) {}

double RevenueManager::calcularPrecio(double porcentajeOcupacion, int diasAnticipacion, int duracionNoches, std::string canal, std::string cliente) const {

    double precioFinal = tarifaBase;

    if (porcentajeOcupacion > 80) {
        precioFinal *= 1.4;
    } else if (porcentajeOcupacion > 50) {
        precioFinal *= 1.15;
    }

    if (diasAnticipacion <= 2) {
        precioFinal *= 1.25;
    } else if (diasAnticipacion > 30) {
        precioFinal *= 0.90;
    }

    if (duracionNoches >= 5) {
        precioFinal *= 0.85;
    }

    if (canal == "Agencia" || canal == "CanalExterno") {
        precioFinal *= 1.10;
    }

    if (cliente == "Corporativo" || cliente == "CORPORATIVO") {
        precioFinal *= 0.80;
    }

    return precioFinal;
}

bool RevenueManager::validarEstadiaMinima(double porcentajeOcupacion, int nochesReservadas, int estadiaMinRequerida) const {
    if (porcentajeOcupacion >= 85.0) {
        return nochesReservadas >= estadiaMinRequerida;
    }
    return true;
}
