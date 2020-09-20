#include <string>
using namespace std;

class Pelicula{
    private:
    int codigo;
    string titulo;
    string director;
    //Fecha fechaEstreno;
    float precioBase;
    char tipoPelicula;

    public:
    Pelicula(int, string, string, bool, float, char);
    void listarInformacion();
    float calcularCosto();
    bool esEstreno();
};