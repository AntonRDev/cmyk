#ifndef LAMINATION_H
#define LAMINATION_H

#include "consumables.h"

namespace CMYK {

class Lamination : public Consumables{

public:
    enum class LAMTYPE {MATT, GLOSS, OTHER};

private:
    LAMTYPE type_;

public:
    Lamination();
    Lamination(QString, int, int, LAMTYPE);
    virtual ~Lamination();

    LAMTYPE getLaminationType() const;
    void setLaminationType(LAMTYPE);
};

} //namespace CMYK

#endif // LAMINATION_H
