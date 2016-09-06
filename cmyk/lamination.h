#ifndef LAMINATION_H
#define LAMINATION_H

#include "consumables.h"

namespace CMYK {

class Lamination : public Consumables{

public:
    enum laminationType {MATT, GLOSS, OTHER};

private:
    laminationType type;

public:
    Lamination();
    Lamination(QString, int, int, laminationType);
    ~Lamination();

    laminationType getLaminationType() const;
    void setLaminationType(laminationType);
};

} //namespace CMYK

#endif // LAMINATION_H
