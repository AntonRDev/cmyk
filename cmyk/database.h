#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>


namespace CMYK {

class Database{

private:
    QSqlDatabase db_;
    bool         is_open_;

public:
    Database(QString hostname, QString databaseName, QString userName, QString password);

    ~Database();

    bool isOpen();

};

} //namespace CMYK

#endif // DATABASE_H
