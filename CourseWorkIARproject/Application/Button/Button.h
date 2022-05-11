#pragma once
#include "pin.h"

template<typename Pin>
class Button
{
public:
static bool WasPressed()
  {
    if(!Pin::IsSet())
     {
       while(!Pin::IsSet());
       return true;
     }
    return false;
  }

static void Enable()
{
  Pin::Enable();
  Pin::SelectInputMode();
}
};