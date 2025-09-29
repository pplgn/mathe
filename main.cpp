#include <pch.h>

int main() 
{
    int n;
    std::cout << "Gib die obere Grenze n ein: ";
    std::cin >> n;

    if (n < 2) 
    {
        std::cout << "Keine Primzahlen <= " << n << std::endl;
        return 0;
    }

    // array mit "true" initialisieren
    std::vector<bool> primzahl(n + 1, true);
    primzahl[0] = false;
    primzahl[1] = false;

    // sieb durchführen
    for (int p = 2; p <= std::sqrt(n); ++p) 
    {
        if (primzahl[p]) 
        {
            // alle vielfachen von p streichen
            for (int k = p * p; k <= n; k += p) 
            {
                primzahl[k] = false;
            }
        }
    }

    // Ausgabe
    std::cout << "Primzahlen bis " << n << ":\n";
    for (int i = 2; i <= n; ++i) 
    {
        if (primzahl[i]) 
        {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

