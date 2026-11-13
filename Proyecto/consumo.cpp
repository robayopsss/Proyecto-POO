#include "consumo.h"
using namespace std;

consumo::consumo(string s, double m, string f) : servicio(s), monto(m), fecha(f) {}

string consumo::getServicio() const {
    return servicio;
}
double consumo::getMonto() const {
    return monto;
}
string consumo::getFecha() const {
    return fecha;
}
