#include "led.h"

Led::Led(int pino)
{
    _pinLed = pino;
}

void Led::ligar()
{

}

void Led::desligar()
{
    
}

void Led::ativarPiscar(uint32_t tempoEspera)
{
    
}

void Led::iniciar()
{
    pinMode(_pinLed, OUTPUT);
    digitalWrite(_pinLed, LOW);
}

void Led::atualizar()
{
    
}

void Led::alternar()
{
    
}