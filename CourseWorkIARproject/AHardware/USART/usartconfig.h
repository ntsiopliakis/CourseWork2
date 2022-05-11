#pragma once
#include "usartDriver.h"
#include "usart.h"

class Usart2;

inline usartDriver<Usart2> bluetoothTransceiver;

class Usart2 : public  USART<USART2,bluetoothTransceiver> {};


