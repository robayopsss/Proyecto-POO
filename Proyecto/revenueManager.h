#ifndef REVENUE_MANAGER_H
#define REVENUE_MANAGER_H

#include <string>

class RevenueManager {
private:
    double tarifaBase;

public:
    RevenueManager(double tBase);
    double calcularPrecio(double porcentajeOcupacion, int diasAnticipacion, int duracionNoches, std::string canal, std::string cliente) const;
    bool validarEstadiaMinima(double porcentajeOcupacion, int nochesReservadas, int estadiaMinimaRequerida) const;
};

#endif
