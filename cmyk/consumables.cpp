#include "consumables.h"

namespace CMYK {

Consumables::Consumables() : name_(""), density_(0), quantity_(0){}

Consumables::Consumables(const QString & name, int density, int quantity)
    : name_(name), density_(density), quantity_(quantity){}

Consumables::~Consumables(){}

} //namespace CMYK
