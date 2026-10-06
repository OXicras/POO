#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led
{
    public:

    uint8_t _pinLed;
    bool _estadoLed;
    uint32_t _tempoAcaoAnterior_ms;
    bool _estaPiscando;
    uint32_t _tempoEsperaAlternar_ms;

    Led(int pino);
    void ligar();
    void desligar();
    void ativarPiscar(uint32_t tempoEspera);
    void iniciar();
    void atualizar();
    void alternar();
};

#endif