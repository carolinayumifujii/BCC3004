#include <iostream>
#include <vector>

class CalculadoraDeArea {
public:
    // Método original para calcular área em metros quadrados (m²)
    double calcularAreaTotalEmMetrosQuadrados(const std::vector<double>& areas) const {
        double areaTotal = 0.0;
        for (const auto& area : areas) {
            areaTotal += area;
        }
        return areaTotal;
    }
    
    // Método modificado para calcular área em hectares (ha)
    double calcularAreaTotalEmHectares(const std::vector<double>& areas) const {
        double areaTotal = calcularAreaTotalEmMetrosQuadrados(areas);
        return areaTotal / 10000; // 1 hectare = 10.000 metros quadrados
    }
};

int main() {
    std::vector<double> areasEmMetrosQuadrados;
    areasEmMetrosQuadrados.push_back(500);
    areasEmMetrosQuadrados.push_back(1000);
    areasEmMetrosQuadrados.push_back(1500);

    CalculadoraDeArea calculadora;

    // Cálculo da área total em metros quadrados
    double areaTotalEmMetrosQuadrados = calculadora.calcularAreaTotalEmMetrosQuadrados(areasEmMetrosQuadrados);
    std::cout << "Área total em metros quadrados: " << areaTotalEmMetrosQuadrados << " m²\n";

    // Cálculo da área total em hectares (errado)
    double areaTotalEmHectares = calculadora.calcularAreaTotalEmHectares(areasEmMetrosQuadrados);
    std::cout << "Área total em hectares: " << areaTotalEmHectares << " ha\n";

    return 0;
}
