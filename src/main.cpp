#include <Arduino.h>
#include <led.h>
#include <botao.h>

Led ledA(4);
Led ledB(5);
Led ledC(6);
Led ledD(7);

void setup() 
{
  ledA.iniciar();
  ledB.iniciar();
  ledC.iniciar();
  ledD.iniciar();

  ledA.ativarPiscar(1000);
  ledB.ligar();
  ledC.desligar();
  ledD.ativarPiscar(2000);
}

void loop() 
{
    ledA.atualizar();
    ledB.atualizar();
    ledC.atualizar();
    ledD.atualizar();
}