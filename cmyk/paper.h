#ifndef PAPER_H
#define PAPER_H
#include "consumables.h"

class QString;

namespace CMYK {

class Paper : public Consumables{

public:
    enum paperType {MATT, GLOSS, OFFSET, DESIGN, STICKER, PLENKA, KALKA, TERMOTRANSFER, OTHER};

private:
    paperType type;

public:
    Paper();
    Paper(QString, int, int, paperType);
    virtual ~Paper();

    paperType getPaperType() const;
    void setPaperType(paperType);
};

} //namespace CMYK

#endif // PAPER_H
