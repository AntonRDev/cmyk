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

    const QString & getName() const;
    void setName(const QString &);

    const int getDensity() const;
    void setDensity(const int);

    const int getQuantity() const;
    void setQuantity(const int);

};

} //namespace CMYK

#endif // CONSUMABLES_H
