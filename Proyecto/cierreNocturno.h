#ifndef CIERRENOCTURNO_H_INCLUDED
#define CIERRENOCTURNO_H_INCLUDED
#include <vector>
#include <string>
#include "Cuenta.h"

struct RegistroAjuste {
    int idCuenta;
    double monto;
    std::string motivo;
    std::string autorizador;
    std::string horaFecha;
};

class CierreNocturno {
private:
    bool cierreEjecutado;
    double ingresosTotalesConsolidados;
    std::vector<RegistroAjuste> bitacoraAuditoria;

public:
    CierreNocturno();

    void ejecutarCierreNocturno(std::vector<Cuenta>& listaCuentas);

    bool solicitarAjustePoscierre(Cuenta& cuenta, double monto, const std::string& motivo, const std::string& autorizador);

    void mostrarReporteConsolidado() const;
    bool estaCierreEjecutado() const;
};

#endif
