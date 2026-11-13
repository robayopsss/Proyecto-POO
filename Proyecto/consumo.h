#ifndef CONSUMO_H_INCLUDED
#define CONSUMO_H_INCLUDED
#include <string>

class consumo {
private:
    std::string servicio;
    double monto;
    std::string fecha;

public:
    consumo(std::string s, double m, std::string f = "Hoy");
    std::string getServicio() const;
    double getMonto() const;
    std::string getFecha() const;
};


#endif
