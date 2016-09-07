#include "paper.h"

namespace CMYK {

Paper::Paper(QString nm, int den, int quant, PAPERTYPE tp) : Consumables(nm, den, quant), type(tp){}

Paper::Paper() : Consumables(), type(OTHER){}

Paper::PAPERTYPE Paper::getPaperType() const{
    return this->type;
}

void Paper::setPaperType(Paper::PAPERTYPE t){
    this->type = t;
}

Paper::~Paper(){}

} //namespace CMYK

