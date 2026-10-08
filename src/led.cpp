#include "led.h"

Led::Led(int pino, bool estadoLed)
{
    _pinLed = pino;
    _estadoLed = estadoLed;
}

void Led::ligar()
{
    _estadoLed = HIGH;
}

void Led::desligar()
{
    _estadoLed = LOW;
}

void Led::ativarPiscar(uint32_t tempoEspera)
{
    _estaPiscando = true;
    _tempoEsperaAlternar_ms = tempoEspera;
}

void Led::desligarPiscar()
{
    _estaPiscando = false;
    _estadoLed = false;
}

void Led::iniciar()
{
    pinMode(_pinLed, OUTPUT);
    digitalWrite(_pinLed, LOW);
    _tempoAcaoAnterior_ms = millis();
}

void Led::atualizar()
{
    digitalWrite(_pinLed, _estadoLed);
    if (millis() >= _tempoAcaoAnterior_ms + _tempoEsperaAlternar_ms && _estaPiscando)
    {
        _tempoAcaoAnterior_ms = millis();
        alternar();
    }
}

void Led::alternar()
{
    _estadoLed = !_estadoLed;
}

uint8_t Led::getPinoLed()
{
    return _pinLed;
}