#ifndef CONSUMABLES_H
#define CONSUMABLES_H

#include <QString>

class QString;

namespace CMYK {

class Consumables{

private:
    QString name;
    int     density;
    int     quantity;

public:
    Consumables();
    Consumables(const QString &, int, int);
    virtual ~Consumables()=0;

    const QString & getName() const {return name;}
    void setName(const QString & n) {name = n;}

    const int getDensity() const {return density;}
    void setDensity(const int den) {density = den;}

    const int getQuantity() const {return quantity;}
    void setQuantity(const int q) {quantity = q;}

};

} //namespace CMYK

#endif // CONSUMABLES_H
