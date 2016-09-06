#ifndef CONSUMABLES_H
#define CONSUMABLES_H

class QString;

namespace CMYK{

class Consumables{

private:
    QString name;
    int     density;
    int     quantity;

public:
    Consumables();
    Consumables(const QString &, int, int);
    virtual ~Consumables();

    virtual const QString & getName() const = 0;
    virtual void setName(const QString &) = 0;

    virtual const int getDensity() const = 0;
    virtual void setDensity(const int) = 0;

    virtual const int getQuantity() const = 0;
    virtual void setQuantity(const int) = 0;

};

} //namespace CMYK

#endif // CONSUMABLES_H
