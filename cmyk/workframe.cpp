#include "workframe.h"

namespace CMYK {

WorkFrame::WorkFrame(QWidget *parent) : QFrame(parent){

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    setFrameStyle(StyledPanel | Sunken);

}

WorkFrame::~WorkFrame(){
}

} //namespace CMYK
