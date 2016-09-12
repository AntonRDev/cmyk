#include "database.h"

namespace CMYK {

Database::Database(QString hostname, QString databaseName, QString userName, QString password)
{
    db_ = QSqlDatabase::addDatabase("QMYSQL");
    db_.setHostName(hostname);
    db_.setDatabaseName(databaseName);
    db_.setUserName(userName);
    db_.setPassword(password);

    if (!db_.open()) {
        qDebug() << "Error:" << db_.lastError();
        is_open_ = false;
    }
    else
        is_open_ = true;
}

Database::~Database(){

    db_.close();
}

bool Database::isOpen(){

    return is_open_;
}

} // namespace CMYK
