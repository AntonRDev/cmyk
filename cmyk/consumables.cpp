#include "consumables.h"

namespace CMYK {

Consumables::Consumables(const QString & str, int den, int quant) : name(str), density(den), quantity(quant){}

Consumables::Consumables() : name(""), density(0), quantity(0){}

} //namespace CMYK
