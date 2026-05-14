#include <iostream>
#include <Seriefocos.hpp>
#include <Foco.hpp>

int main (int argc, char cost *argv[])
{
    Seriefocos serie;
    serie.EncenderFocos();
    serie.MostrarFocos();
    serie.ApagarFocos();
    serie.MostrarFocos();

    return 0;
}