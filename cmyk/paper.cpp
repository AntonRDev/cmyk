#include "paper.h"

namespace CMYK {

Paper::Paper(QString nm, int den, int quant, paperType tp) : Consumables(nm, den, quant), type(tp){}

Paper::Paper() : Consumables(), type(OTHER){}

Paper::paperType Paper::getPaperType() const{
    return this->type;
}

void Paper::setPaperType(Paper::paperType t){
    this->type = t;
}

Paper::~Paper(){}

} //namespace CMYK

