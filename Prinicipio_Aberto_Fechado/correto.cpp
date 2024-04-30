#include <iostream>
#include <vector>


//Correto
class CalculadoraDeArea {
public:
    virtual double calcularAreaTotal(const std::vector<double>& areas) const = 0;
    virtual ~CalculadoraDeArea() {}
};

class CalculadoraDeAreaEmMetrosQuadrados : public CalculadoraDeArea {
public:
    double calcularAreaTotal(const std::vector<double>& areas) const override {
        double areaTotal = 0.0;
        for (size_t i = 0; i < areas.size(); ++i) {
            areaTotal += areas[i];
        }
        return areaTotal;
    }
};

class CalculadoraDeAreaEmHectares : public CalculadoraDeArea {
public:
    double calcularAreaTotal(const std::vector<double>& areas) const override {
        double areaTotalEmMetrosQuadrados = 0.0;
        for (size_t i = 0; i < areas.size(); ++i) {
            areaTotalEmMetrosQuadrados += areas[i];
        }
        return areaTotalEmMetrosQuadrados / 10000; // 1 hectare = 10.000 metros quadrados
    }
};

int main() {
    std::vector<double> areasEmMetrosQuadrados;
    areasEmMetrosQuadrados.push_back(500);
    areasEmMetrosQuadrados.push_back(1000);
    areasEmMetrosQuadrados.push_back(1500);

    CalculadoraDeAreaEmMetrosQuadrados calculadoraEmMetrosQuadrados;
    double areaTotalEmMetrosQuadrados = calculadoraEmMetrosQuadrados.calcularAreaTotal(areasEmMetrosQuadrados);
    std::cout << "Área total em metros quadrados: " << areaTotalEmMetrosQuadrados << " m²\n";

    CalculadoraDeAreaEmHectares calculadoraEmHectares;
    double areaTotalEmHectares = calculadoraEmHectares.calcularAreaTotal(areasEmMetrosQuadrados);
    std::cout << "Área total em hectares: " << areaTotalEmHectares << " ha\n";

    return 0;
}
