#include "pch.h"

int main() 
{
    double radius = 1.0;
    int num_sides = 6; // sechseck
    double pi_approx = 0.0;

    for (int i = 0; i < 10; ++i)  // 10 iterationen für anzahl nachkommastellen
    { 
        double perimeter_inscribed = num_sides * 2 * radius * sin(M_PI / num_sides);
        double perimeter_circumscribed = num_sides * 2 * radius * tan(M_PI / num_sides);

        // annäherung von pi aus dem inneren und äußeren polygon
        double pi_in = perimeter_inscribed / (2.0 * radius);
        double pi_out = perimeter_circumscribed / (2.0 * radius);

        pi_approx = (pi_in + pi_out) / 2.0; // durchschnitt annäherung

        std::cout << "Anzahl der Seiten: " << num_sides << ", Näherung von Pi: " << pi_approx << std::endl;

        num_sides *= 2; // verdoppelt seiten nach jedem durchlauf
    }

    return 0;
}
