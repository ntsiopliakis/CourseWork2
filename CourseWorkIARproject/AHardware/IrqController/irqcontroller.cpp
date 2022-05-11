#include "irqcontroller.hpp"
#include "usartconfig.h"
#include "spiconfig.h"

void IrqController::HandleIrqSPI1()
{
  Spi1::SpiInterruptHandler();
}
void IrqController::HandleIrqSPI2()
{
  Spi2::SpiInterruptHandler();
}
void IrqController::HandleIrqUSART2()
{
  Usart2::UsartInterruptHandler();
}
void IrqController::HandleIrqExtiLine15_10()
{
}
