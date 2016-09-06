#include "lamination.h"

namespace CMYK {

Lamination::Lamination() : Consumables(), type(OTHER){}

Lamination::Lamination(QString nm, int den, int quant, laminationType tp) : Consumables(nm, den, quant), type(tp){}

Lamination::~Lamination(){}

Lamination::laminationType Lamination::getLaminationType() const{
    return this->type;
}
void Lamination::setLaminationType(Lamination::laminationType t){
    this->type = t;
}

} //namespace CMYK
