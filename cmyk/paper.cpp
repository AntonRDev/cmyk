#include "paper.h"

namespace CMYK {

Paper::Paper(QString name, int density, int quantity, PAPERTYPE type) : Consumables(name, density, quantity), type_(type){}

Paper::Paper() : Consumables(), type_(PAPERTYPE::OTHER){}

Paper::PAPERTYPE Paper::getPaperType() const{
    return this->type_;
}

void Paper::setPaperType(PAPERTYPE type){
    this->type_ = type;
}

Paper::~Paper(){}

} //namespace CMYK

