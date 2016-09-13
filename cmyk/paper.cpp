#include "paper.h"

namespace CMYK {

Paper::Paper(QString name, int density, int quantity, PAPERTYPE type) : Consumables(name, density, quantity), type_(type){}

Paper::Paper() : Consumables(), type_(PAPERTYPE::OTHER){}

Paper::PAPERTYPE Paper::get_paper_type() const{
    return this->type_;
}

void Paper::set_paper_type(PAPERTYPE type){
    this->type_ = type;
}

Paper::~Paper(){}

} //namespace CMYK

