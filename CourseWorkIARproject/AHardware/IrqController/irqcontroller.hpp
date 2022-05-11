#ifndef UNTITLED_IRQCONTROLLER_HPP
#define UNTITLED_IRQCONTROLLER_HPP


class IrqController
{
  public:
    static void HandleIrqSPI1();
    static void HandleIrqSPI2();
    static void HandleIrqUSART2();
    static void HandleIrqExtiLine15_10();    
};

#endif //UNTITLED_IRQCONTROLLER_HPP
