#ifndef CONSUMABLES_H
#define CONSUMABLES_H

#include <QString>

namespace CMYK {

class Consumables{

private:
    QString name_;
    int     density_;
    int     quantity_;

public:
    Consumables();
    Consumables(const QString &, int, int);
    virtual ~Consumables()=0;

    const QString & getName() const {return name_;}
    void setName(const QString & n) {name_ = n;}

    const int getDensity() const {return density_;}
    void setDensity(const int den) {density_ = den;}

    const int getQuantity() const {return quantity_;}
    void setQuantity(const int q) {quantity_ = q;}

};

} //namespace CMYK

#endif // CONSUMABLES_H
