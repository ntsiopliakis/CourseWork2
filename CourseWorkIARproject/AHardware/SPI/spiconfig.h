#pragma once
#include "spiDriver.h"
#include "spi.h"

class Spi1;
inline SpiDriver<Spi1> spi1Transceiver;
class Spi1 : public  SPI<SPI1, spi1Transceiver> {};

class Spi2;
inline SpiDriverOnlyTransmit<Spi2> spi2Transceiver;
class Spi2 : public  SPI<SPI2,spi2Transceiver> {};

