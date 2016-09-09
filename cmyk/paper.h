#ifndef PAPER_H
#define PAPER_H
#include "consumables.h"

class QString;

namespace CMYK {

class Paper : public Consumables{

public:
    enum class PAPERTYPE {MATT, GLOSS, OFFSET, DESIGN, STICKER, PLENKA, KALKA, TERMOTRANSFER, OTHER};

private:
    PAPERTYPE type_;

public:
    Paper();
    Paper(QString, int, int, PAPERTYPE);
    virtual ~Paper();

    PAPERTYPE getPaperType() const;
    void setPaperType(PAPERTYPE);
};

} //namespace CMYK

#endif // PAPER_H
