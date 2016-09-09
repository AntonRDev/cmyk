#include "lamination.h"

namespace CMYK {

Lamination::Lamination() : Consumables(), type_(LAMTYPE::OTHER){}

Lamination::Lamination(QString name, int density, int quantity, LAMTYPE type) : Consumables(name, density, quantity), type_(type){}

Lamination::~Lamination(){}

Lamination::LAMTYPE Lamination::getLaminationType() const{
    return this->type_;
}
void Lamination::setLaminationType(LAMTYPE type){
    this->type_ = type;
}

} //namespace CMYK
