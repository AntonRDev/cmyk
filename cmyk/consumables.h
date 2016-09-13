#ifndef CONSUMABLES_H
#define CONSUMABLES_H

#include <QString>

namespace CMYK {

class Consumables{

private:
    QString name_;
    int     density_;
    int     quantity_;
    double  cost_;

public:
    Consumables();
    Consumables(const QString &, int, int);
    virtual ~Consumables()=0;

    const QString & get_name() const {return name_;}
    void set_name(const QString & n) {name_ = n;}

    int get_density() const {return density_;}
    void set_density(int den) {density_ = den;}

    int get_quantity() const {return quantity_;}
    void set_quantity(int q) {quantity_ = q;}

    double get_cost() const {return cost_;}
    void set_cost (double c) {cost_ = c;}

};

} //namespace CMYK

#endif // CONSUMABLES_H
