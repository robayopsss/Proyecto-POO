#ifndef CUENTA_H
#define CUENTA_H
#include <iostream>
#include <vector>
#include <string>
#include "Consumo.h"

class Cuenta {
private:
    int idCuenta;
    int idReserva;
    double totalAlojamiento;
    std::vector<Consumo> consumos;
    bool bloqueadaPorCierre;
    double saldoPendiente;

public:
    Cuenta(int idC, int idR, double aloja);
    bool agregarConsumo(const Consumo& c);
    double calcularSubtotal() const;
    double calcularFacturaFinal(double porcentajeImpuesto) const;
    void dividirCuenta(double porcentaje, std::string nuevoResponsable);
    bool pagarConPuntos(int puntos, double valorPorPunto);
    bool estaBloqueada() const;
    void bloquearFolio();
    void aplicarAjuste(double monto, const std::string& motivo);
    int getIdCuenta() const;
    double getSaldoPendiente() const;
};

#endif
#endif
