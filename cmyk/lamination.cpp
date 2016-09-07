#include "lamination.h"

namespace CMYK {

Lamination::Lamination() : Consumables(), type(OTHER){}

Lamination::Lamination(QString nm, int den, int quant, LAMTYPE tp) : Consumables(nm, den, quant), type(tp){}

Lamination::~Lamination(){}

Lamination::LAMTYPE Lamination::getLaminationType() const{
    return this->type;
}
void Lamination::setLaminationType(Lamination::LAMTYPE t){
    this->type = t;
}

} //namespace CMYK
